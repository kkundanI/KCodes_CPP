//Niven no. {sum of digit = no.}
#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	int n1,n,s,d;
	cout<<"Enter a no. : ";
	cin>>n;
	n1=n,d=0,s=0;
	while(n!=0)
	{ d=n%10;
	  s=s+d;
	  n=n/10;
	}
	if(n1%s==0)
	 cout<<n1<<" is an niven no. ";
	else
	 cout<<n1<<" is not an niven no. ";
	 
	return 0;
}
