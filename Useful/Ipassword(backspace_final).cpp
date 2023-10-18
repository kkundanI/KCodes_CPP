/* Works only on cxxdroid */
// Updated code of Krish Kumar Singh
#include <iostream>
#include <conio.h>
using namespace std;

void mask(int i);

int main()
{
	int i;
	char a[15];
	for(i=0; i<15; i++) {
	    cout << "Enter password : ";
	    mask(i);
	    a[i] = getch();
	    if(a[i]== '')
	     { if(i==0)
	         i-=1;
	       else
	         i-=2;
	     }
	    if (a[i] == '\n')
	        break;
	    clrscr();
	}
	cout << "\nPassword set" << endl;
	cout << "Forgot password, Press 0 : ";
	cin >> i;
	if (i==0)
	    cout << "\nPassword : " << a;
	else 
	    return 0;
}

void mask(int i) {
    for(int k=1; k<=i; k++)
        cout << "*";
}