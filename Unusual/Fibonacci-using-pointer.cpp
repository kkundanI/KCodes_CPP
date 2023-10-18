//Fibonacci using pointer

#include <iostream>
using namespace std;

void fb(int *a, int *b)
{
	int k = *a + *b;
	*a = *b;
	*b = k;
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
		
	for(int i = 2; i<n; i++)
	{
		if(n>=3)
		{
			fb(&x, &y);
			cout<<y<<"\n";
		}
	}
	return 0;
}
