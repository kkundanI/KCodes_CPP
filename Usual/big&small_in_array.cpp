#include<iostream>

using namespace std;
int main() {
	int i=5,a[i],big,small;
	cout<<"Enter any 5 no.s :\n";
  for(i=0;i<5;i++)
		cin>>a[i];
	big=a[0];
	small=a[0];
  for(i=0;i<5;i++)
	{ if(a[i]>big)
	   big=a[i];
	  if(a[i]<small)
	   small=a[i];
	}
	cout<<"\nLargest value : "<<big<<endl; 
	cout<<"smallest value : "<<small<<endl; 
	
	
	return 0;
}
