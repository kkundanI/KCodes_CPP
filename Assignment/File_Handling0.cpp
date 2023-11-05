//Write the content of a text file 
#include<iostream>
using namespace std;
#include<fstream>

 int main() {
    ofstream fout;
    string line;
     fout.open("Text.txt");
    while(fout) {
        getline(cin, line);
         if(line == "-1")
           break;
        fout<<line<<endl;
    }
     fout.close();
     ifstream fin;
     fin.open("Text.txt");
      while(getline(fin,line)){
        cout<<line<<endl;
      }
      fin.close();
      return 0;
    
 }

 