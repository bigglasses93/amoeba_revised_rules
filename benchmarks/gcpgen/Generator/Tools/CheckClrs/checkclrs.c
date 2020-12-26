/*
        CHECK COLORINGS OF A GRAPH AS RECORDED IN SOME FILE
*/

/*
        Title: Checkclrs 
        file: checkclrs.c
        does: checkclrs routine
        Source: Joseph Culberson's Coloring Page
                http://web.cs.ualberta.ca/~joe/Coloring/index.html
        Author: Joseph Culberson
        email: joe@cs.ualberta.ca
        Copyright (c) 1997 Joseph Culberson. All rights reserved.

        Redistribution and use in source and binary forms, with or without
        modification, are permitted provided that the following conditions
        are met:
        1. Redistributions of source code must retain the above copyright
        notice, this list of conditions and the following disclaimer.
        2. Redistributions in binary form must reproduce the above copyright
        notice, this list of conditions and the following disclaimer in the
        documentation and/or other materials provided with the distribution.
        3. All advertising materials mentioning features or use of this
        software must display the following acknowledgement:
        This product includes software developed by J. Culberson at the
        University of Alberta, Edmonton.
        4. Neither the name of the University nor the names of its contributors
       may be used to endorse or promote products derived from this software
        without specific prior written permission.

        THIS SOFTWARE IS PROVIDED BY THE CONTRIBUTORS ``AS IS'' AND ANY
        EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
        THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
        PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE
        CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
        SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
        NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
        LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
        HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
        CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
        OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
        EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

        THIS SOFTWARE IS SUPPLIED WITHOUT ANY SUPPORT SERVICES.

*/

#include "mysys.h"
#include "graph.h"
#include "colorrtns.h"

#include<string.h>
#include<malloc.h>

/* Global Time info */
long seconds,microsecs,i;
struct rusage tmp;

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

int main(int argc, char **argv)
{
	int numcolors;

	int i,c;

	FILE *infile;

	popmembertype m;

	if (argc < 3) {	
	    	printf("Usage: checkclrs graphfile colorfile\n ");
	    	exit(1);
	}

	getgraph(argv[1]);
	
	if (NULL == (infile = fopen(argv[2],"r")) ) {
		printf("Error: Cannot open the color file %s\n",argv[2]);
		exit(1);
	}
	
	numcolors = getcolorings(infile, order);
	for(c=0;c<numcolors;c++) {
		for(i=0;i<order;i++) {
			m.vc[i].vertex = i;
			m.vc[i].color = colorings[c][i];
		}
		printf("COLOR[%d]  ",c+1);
		getcolorinfo(&m);
		printinfo(&m);
		verifycolor(&m);
	}
		
	fclose(infile);

	return(1);
}
	
