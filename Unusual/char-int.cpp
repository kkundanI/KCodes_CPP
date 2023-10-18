#include<iostream>

using namespace std;
int main() {
	int asciiValue = 65;
char character = char(asciiValue);
cout << character<<endl; // output: A
cout << char(90)<<endl; // output: Z
cout <<int(char(90))<<endl;
	return 0;
}
