#include<iostream>
using namespace std;

char myMax(char x, char y)
{
	return (x > y) ? x : y;
}

int main() {
   cout << myMax('g', 'e') << endl;

    return 0;
}