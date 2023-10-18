#include<iostream>

using namespace std;
float * triangle() {
	int h,bs,b,a,c;
	cout<<"Enter hight and base of triangle : ";
	cin>>h>>bs;
	cout<<endl<<"Enter 3 sides of triangle : ";
	cin>>a>>b>>c;
   static float t[2];
	t[0]=0.5*h*bs;
	t[1]=a+b+c;
	return t;
}
int main() {
  float *t;
 
  cout<<endl<<*triangle();
  cout<<endl<<*(triangle()+1);
	return 0;
}
