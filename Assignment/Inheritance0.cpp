

#include <iostream>


using namespace std;

class student {
	private: 
		char name[20], r[5];
	public:
		student();
		void putdata();
};

class marks: public student {
	private:
		int p, c, m;
	public:
		marks();
		void putdata();
};

int main()
{
	marks obj;
	return 69;
}

student::student() {
	cout << "Enter name : ";
	cin >> name;
	cout << "Enter roll : ";
	cin >> r;
}

void student::putdata() {
	cout << "Name : " << name << endl;
	cout << "Roll : " << r << endl;
}

// Complete process
marks::marks() {
	cout << "Enter marks in Phy, chem, maths : ";
	cin >> p >> c >> m;
	system("cls");
	marks::putdata();
	system("pause");
}

//Entire output
void marks::putdata() {
	student::putdata();
	cout << "Physics : " << p << endl;
	cout << "Chemistry : " << c << endl;
	cout << "Maths : " << m << endl;
	cout << "Total : " << p+c+m << endl;
}
