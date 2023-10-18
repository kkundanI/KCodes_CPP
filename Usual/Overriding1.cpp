// Call Overridden Function From Derived Class
// C++ program to demonstrate function overriding
// by calling the overridden function
// of a member function from the child class

#include <iostream>
using namespace std;

class Parent {
public:
	void GeeksforGeeks_Print()
	{
		cout << "Base Function" << endl;
	}
};

class Child : public Parent {
public:
	void GeeksforGeeks_Print()
	{
		cout << "Derived Function" << endl;

		// call of overridden function
		Parent::GeeksforGeeks_Print();
	}
};

int main()
{
	Child Child_Derived;
	Child_Derived.GeeksforGeeks_Print();
	return 0;
}
