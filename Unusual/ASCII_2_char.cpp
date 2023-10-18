#include <iostream>
using namespace std;
 
int main()
{
	int ascii;
	cout<<"Enter ASCII: \n";
	cin>>ascii;
	char ch = char(ascii);
	cout<<"Corresponding character is: "<<ch<<endl;
	return 0;
}
 