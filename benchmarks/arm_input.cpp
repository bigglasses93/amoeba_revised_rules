#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(int argc, char** argv){
    string line;
    ifstream infile(argv[1]);    
    ofstream outfile("arm_input.txt");
    if(infile.is_open()){
        while(getline(infile,line)){
            line.erase(line.length()-1);
            outfile << "\"" << line.append("\\n\"") << endl;   
        }        
    }
    infile.close();
    outfile.close();
    return 0;
}