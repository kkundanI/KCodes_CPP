#include<iostream>

using namespace std;
int * triangle() {
	int h,bs,b,a,c;
	cout<<"Enter hight and base of triangle1 : ";
	cin>>h>>bs;
	cout<<endl<<"Enter 3 sides of triangle2 : ";
	cin>>a>>b>>c;
   static int t[2];
	t[0]=0.5*h*bs;
	t[1]=a+b+c;
	return t;
}
int main() {
  int *t;
  t=triangle();

  cout<<"Area of triangle1 : "<<endl<<*t;
  cout<<"Area of triangle2 : "<<endl<<*(t+1);
 
 	return 0;
}
