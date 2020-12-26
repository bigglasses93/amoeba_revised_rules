/*
	This program will compute the proximity table between sets of 
	colorings. Two modes are available either (1) to compute a comparison
	between the first item of the input list element by element
	with all the others, or (2) to produce pairwise comparison table
	(totals only).
*/
#include<stdio.h>
#include<string.h>
#include<malloc.h>

extern int exit();
extern int atoi();

/* up to MAXARRAY colorings in table */
#define MAXARRAY 100
int *colorings[MAXARRAY]; /* dynamically allocate colorings */

#define LABELSIZE 100
char *labels[MAXARRAY]; /* coloring labels */

int getcolorings(FILE *fp, int order)
{
	int cnt,i;
	char *s;

	cnt = 0;
	while ( !feof(fp) ) {
		if (cnt >= MAXARRAY) {
		      printf("MAXARRAY exceeded - fix MAXARRAY and recompile\n");
			return -1;
		}
		labels[cnt] = (char *) malloc(LABELSIZE);
		s = fgets( labels[cnt], 81, fp);
		if ( 0 == strncmp(labels[cnt],"CLRS",4)) {

			colorings[cnt] = (int *) calloc(order, sizeof(int));
			
			for(i=0;i<order;i++)
				if ( 0 == fscanf(fp, "%d", colorings[cnt]+i)) {
					printf("BAD FILE FORMAT OR");
					printf(" wrong number of vertices\n");
					return -1;
				}
			cnt++;
			printf("[%2d] %s\n",cnt,labels[cnt-1]);
		}

	}
	return cnt;
}

void cmputeprox(int c1,int c2, int *total, int *numparts, int parts[], int
numnodes)
{
	int i,j;

	*numparts = 0;
	for(i=0;i<numnodes;i++) {
		if (colorings[c1][i] > *numparts) 
			*numparts = colorings[c1][i];
		parts[i] =0;
	}

	*total = 0;
	for(i=1;i<numnodes;i++) for(j=0;j<i;j++) 
	    if ( (colorings[c1][i] == colorings[c1][j]) 
 		  && (colorings[c2][i] == colorings[c2][j]) ) {
			(*total)++;
			parts[colorings[c1][i]]++;
	}

}
	
void prox(int *whichclrs, int numargs, int numclrs, int mode, FILE *fp, int
numnodes)
{
	int i,j;

	int firstclr;

	int total, numparts;

	int *partvals;

	int *which;

	which = (int *) calloc(numclrs,sizeof(int));

	if (whichclrs[0] <0) {
		for (i=0;i<numclrs;i++) which[i] = 1;
	} else {
		for (i=0;i<numclrs;i++) which[i] = 0;
		for(i=0;i<numargs;i++) which[whichclrs[i]] = 1;
	}

	firstclr = whichclrs[0];
	if (firstclr < 0) firstclr = ( -1 ) - firstclr;
	
	fprintf(fp,"\n\t----------------------\n");
	fprintf(fp,"The source coloring [%2d] is flagged by *\n",firstclr+1);
	for(i=0;i<numclrs;i++) {
		if (which[i]) {
			if ( i == firstclr) fprintf(fp,"*");
			else fprintf(fp," ");
			fprintf(fp,"[%2d] %s", i+1, labels[i]);
		}
	}

	partvals = (int *) calloc(numnodes, sizeof(int));
	if (mode == 1) {
		fprintf(fp,"\n");
        	for(i=0;i<numclrs;i++) 
		   if (which[i]) {
			cmputeprox(firstclr,i,&total, &numparts, 
				partvals,numnodes);
			if (i == firstclr) 
				fprintf(fp,"*[%2d] %d :",i+1, total);
			else	fprintf(fp," [%2d] %d :",i+1, total);
			for(j=1;j<=numparts;j++) 
				fprintf(fp, " %d",partvals[j]);
			fprintf(fp,"\n");
		}
	} else  if (mode == 2) {
		fprintf(fp,"\n     ");
		for(i=0;i<numclrs;i++) 
			if (which[i]) fprintf(fp,"   [%2d]",i+1);
		fprintf(fp,"\n");
		for(i=0;i<numclrs;i++) {
			if (which[i]) {
				fprintf(fp,"[%2d] ",i+1);
				for(j=0;j<numclrs;j++) if (which[j]) {
					cmputeprox(i,j,&total, 
						&numparts, partvals, numnodes);
					fprintf(fp, " %6d",total);
				}
			
				fprintf(fp,"\n");
			}
		}
	} else {
		printf("ERROR: Illegal mode = %d\n",mode);
	}

}

int main(int argc, char **argv)
{
	int numnodes, numcolors;

	int whichclrs[MAXARRAY];

	int i;

	FILE *infile, *outfile;

	if (argc < 5) {	
	    	printf("Usage: proximity infile outfile ");
		printf("numnodes mode colorlist\n");
	    	printf("\tinfile - a set of colorings or partitions\n");
		printf("\tnumndes - number of vertices; no graph is input\n");
		printf("\tmode  - either 1 or 2:\n");
		printf("\t\t1 = compare first coloring element by element");
		printf(" to all other colorings\n");
		printf("\t\t2 = pairwise comparisons of all colorings in list");
		printf("(totals only)\n");
		printf("\tcolorlist - list of colorings to be used\n");
		printf("\t\tif the first is < 1 then all colorings in infile used\n");
	    	exit(1);
	}

	if (argc > MAXARRAY-4 ) {
		printf("Usage: at most 100 colors in colorlist\n");
		exit(1);
	}

	if (NULL == (infile = fopen(argv[1],"r")) ) {
		printf("Error: Cannot open the input file %s\n",argv[1]);
		exit(1);
	}
	
	if (NULL == (outfile = fopen(argv[2],"a")) ) {
		printf("Error: Cannot open the output file %s\n",argv[2]);
		fclose(infile);
		exit(1);
	}
	
	if (1 >= (numnodes = atoi(argv[3])) ) {
		printf("Error: illegal number of nodes %s\n",argv[3]);
		fclose(infile);
		fclose(outfile);
		exit(1);
	}

	numcolors = getcolorings(infile, numnodes);
	fclose(infile);

	if (numcolors > 0) {

		for(i=5;i<argc;i++) {
			whichclrs[i-5] = atoi(argv[i])-1;

		}

		prox(whichclrs, argc-5, numcolors, atoi(argv[4]), 
			outfile,numnodes);
	
	}

	fclose(outfile);
	return(0);
}
	
