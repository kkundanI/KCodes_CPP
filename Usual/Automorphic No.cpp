//Automorphic No.
#include<iostream>

using namespace std;
int main() {
  int C,n,na,n1,c;
  	cout<<"Enter a no. : ";
  	cin>>n;
  	n1=n,na=n*n;
  	while(na!=0)
  	{ na=na/10;
  	c++;
  	}
  	 C = pow(10,c);
  	if(na%C==n1)
  	 cout<<"\n"<<n1<<" is an Automorphic no. ";
  	else	
  	 cout<<"\n"<<n1<<" is not an Automorphic no. ";
  	
	return 0;
}
