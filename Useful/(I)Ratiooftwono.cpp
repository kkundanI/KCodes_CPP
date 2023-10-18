//Ratio of two numbers.
#include<iostream>
using namespace std;
int main() 
{ float a,b;
 cout<<"Enter any two no.s : \n";
 cin>>a>>b;
 
 float d=0,e=0;
 int n=a;
 if(a>b)
   n=b;
 
 
 for(int i=n;i>1;i--)
   {
   d=a/i,e=b/i;
   if(d==floor(d) && e==floor(e))
    break;
   }
   cout<<"\n Result: "<<d<<":"<<e;
 
return 0;
}