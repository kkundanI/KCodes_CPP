//fibonacci with recursion
#include <iostream>
using namespace std;

		int fb(int a, int b ,int n);
	int main()
	{
		int n;
		cout<<"Enter range :\t";
		cin>>n;
		cout<<"0\n";
		if(n>=2)
		cout<<"1\n";
		if(n>2)
		 fb(0,1,n-2);
	    return 0;
	 }
		
		
		int fb(int a,int b,int n)
		{ int k,c=2;
		   if(n==0)
		    return 0;
			k = a+b;
			cout<<k<<"\n";
			a=b;
			b=k;
			c++;
		fb(a,b,n-1);
		return 0;
		}
