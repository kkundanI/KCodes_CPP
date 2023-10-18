//Neon no. : 
#include<iostream>

using namespace std;
int main() {
	int d,n1,na,n,s;
	cout<<"Enter any no. : ";
	cin>>n;
	n1=n,na=n*n;
	d=0;s=0;
	while(na!=0)
	{ d=na%10;
	s=s+d;
	na=na/10;
	}
	if(s==n1)
	cout<<n<<" is Neon no. ";
	else
	cout<<n<<" is not an Neon no. ";
	
	
	return 0;
}
