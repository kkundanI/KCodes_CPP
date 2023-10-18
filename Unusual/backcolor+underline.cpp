/*Works only on cxxdroid*/
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main() {
	textbackground(GREEN);
	textcolor(BLACK);
	cout<<"hello.h";
	textbackground(BLACK);
	textcolor(GREEN);
	
	 cprintf("\n%c[4mHello world\n%c[0m",27,27); 
	return 0;
}
