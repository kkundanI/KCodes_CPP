//Fibonacci using pointer and recusion both

#include <iostream>
using namespace std;

int  fb(int *a, int *b,int n)
{  if(n==0)
     return 0;
	int k = *a + *b;
	cout<<k<<"\n";
	*a = *b;
	*b = k;
	fb(&(*a),&(*b),n-1);
	return 0;
}

int main()
{
	int x=0, y=1, n;
	cout<<"Enter range : ";
	cin>>n; 
	cout<<"0\n";
			if (n>=2)
				{
					cout<<"1\n";
				}
			if(n>=3)
			{
			fb(&x, &y,n-2);
			}
	return 0;
}