//Rectangle pattern
#include<iostream>
using namespace std;
int Hline(int l)
{
  for(int i=0;i<l;i++)
 	cout<<"* ";
  cout<<"\n";
  return 0;
}
//space def_n;

//Vertical line def_n;
int Vline(int b)
{ for(int j=0;j<b;j++)
   {
   cout<<"*";
   cout<<"                                     ";
   cout<<"*";
   cout<<"\n";
   }
  return 0;
}

int main() {
Hline(20);
Vline(6);
Hline(20);
	
	return 0;
}
