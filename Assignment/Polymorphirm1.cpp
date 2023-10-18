// C++ Program to demonstrate
// the Virtual Function
#include <iostream>
using namespace std;

// Declaring a Base class
class Base {

public:
	// virtual function
	virtual void display()
	{
		cout << "Called virtual Base Class function"
			<< "\n\n";
	}

	void print()
	{
		cout << "Called Base print function"
			<< "\n\n";
	}
};

// Declaring a Child Class
class Child : public Base {

public:
	void display()
	{
		cout << "Called Child Display Function"
			<< "\n\n";
	}

	void print()
	{
		cout << "Called Child print Function"
			<< "\n\n";
	}
};

// Driver code
int main()
{
	// Create a reference of class Base
	Base* base;

	Child child;

	base = &child;

	// This will call the virtual function
	base->Base::display();

	// this will call the non-virtual function
	base->print();
}
