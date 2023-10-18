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
    char n[3][10] = { "Zabuza","Nanami","Zenitsu" };
    
  //cout<<strlen(n[1]);
  for(int i=0;i<3;i++)
  { int s=0;
  s=strlen(n[i]);
  //cout<<s<<endl;
  getch();
      int ss=10-s;
       cout<<n[i];
       space(ss);
       cout<<"|\n";
}
    return 0;
}