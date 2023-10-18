//print even and odd digits of a no. ;
#include<iostream>
using namespace std;
int main() {
	int n,s=0,s1=0,d=0;
	cout<<s<<" "<<s1;
	cout<<"Enter any no. : ";
	cin>>n;
int	i=n;
	while(i!=0)
	{
		d=i%10;
		if(d%2==0)
			s1=s1+d;
		else 
			s=s+d;
		i/=10;
	}
	cout<<"Sum of Even digits of "<<n<<" is "<<s1<<endl;
	cout<<"Sum of Odd digits of "<<n<<" is "<<s<<endl;
	
	return 0;
}
