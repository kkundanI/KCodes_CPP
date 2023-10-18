#include<iostream>
#include<stdlib.h>

using namespace std;
int main() {
	int c,x,f,n;
	
	srand(time(0));
	x=rand()%10+1;
	cout<<"result : "<<x;
	return 0;
}
