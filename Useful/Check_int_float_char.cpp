#include<iostream>
using namespace std;
int main() 
{
 int d = 5;
 float c=0.76;
 
 //By using floor()
 if(c==floor(c))
   cout<<"true(c)";
 else
  cout<<" False(c) ";
 
 if(d==floor(d))
   cout<<" true(d) \n";
 else
  cout<<"False(d)";
  
  //By Typecasting
  float a=5.05;
  float b=6.00;
  	if(int(a)==a)
  	   cout<<"True(a)";
  	else
  	   cout<<"False(a) ";
      
  	if(int(b)==b)
  	   cout<<"True(b)\n";
  	else
  	   cout<<"False(b)";
  	   
  //By Typecasting(1)
  float x=5.05;
  float y=6.00;
  	if(x - int(x)==0)
  	   cout<<"True(x)";
  	else
  	   cout<<"False(x) ";
      
  	if(y - int(y)>0)
  	   cout<<"False(y)\n";
  	else
  	   cout<<"True(y)";   
  	   
    char ch = '6';
  
    // Check if the given input
    // is numeric or not
    if (isdigit(ch))
        cout<<"Entered character is"
            " numeric character";
    else
        cout<<"Entered character is not"
            " a numeric character";
return 0;
}