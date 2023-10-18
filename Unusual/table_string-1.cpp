// Online C++ compiler to run C++ program online
#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

void space(int n){
    int c=0;
    while(c!=n){
     cout<<" "; c++;}
     
}
int main() {
    char n[3][15] = { "Kundan","Kabuto","Sang" };
    int roll[3] = { 37,44,55};
    int marks[3] = {439,475,445};
  //cout<<strlen(n[1]);
  cout<<"--------------------------\n";
  cout<<"|   Student details     |\n";
  for(int i=0;i<3;i++)
  { int s=0;
  s=strlen(n[i]);
  //cout<<s<<endl;
  getch();
      int ss=10-s;
      cout<<"--------------------------\n";
      
       cout<<"| "<<n[i];
       space(ss);
       cout<<"|  ";
       cout<<roll[i]<<" | ";
       cout<<marks[i]<<" |\n";
}
cout<<"--------------------------\n";
    return 0;
}
