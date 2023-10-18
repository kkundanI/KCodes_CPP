// C++ program to demonstrate
// Operator Overloading or
// Compile-Time Polymorphism
#include <iostream>
using namespace std;

class Complex {
private:
	int real, img;

public:
	Complex(int r = 0, int i = 0)
	{
		real = r;
		img = i;
	}

	// This is automatically called
	// when '+' is used with between
	// two Complex objects
	Complex operator+(Complex obj)
	{
		Complex res;
		res.real = real + obj.real;
		res.img = img + obj.img;
		cout<<"Obj.real : "<<obj.real<<" Obj.img : "<<obj.img<<endl;
		cout<<"res.real : "<<res.real<<" res.img : "<<res.img<<endl;
		cout<<"real : "<<real<<" img : "<<img<<endl;
		
		return res;
	}
	void print() { cout << real << " + i" << img << endl; }
};

// Driver code
int main()
{
	Complex c1(10, 5), c2(2, 4);

	// An example call to "operator+"
	Complex c3 = c1 + c2;
	c3.print();
}
