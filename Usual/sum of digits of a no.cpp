//Sum of digits of a no.
#include<iostream>

using namespace std;
int main() {
  int c=0,s=0,n,d=0;
	cout<<"Enter a no. : ";
	cin>>n;
	for(int i=n;i!=0;i/=10)
	{ d=i%10;
	 c++;
//	 cout<<endl<<c<<endl;
	 s=s+d;
	 }
	 cout<<"Sum of "<<c<<" digits of "<<n<<" is "<<s;	
	return 0;
}
