// age and compare
#include <iostream>
#include <conio.h>

using namespace std;
//void hr();
void hr()
{
	for (int i = 0; i < 32; i++)
		cout << "-";
	cout << endl;
}

//int age(int d1,int m1,int y1,int d2,int m2,int y2,string name1,string name2,int ki);

int age(int d1, int m1, int y1, int d2, int m2, int y2, string name1, string name2, int ki)
{
	int rd = 00, rm = 00, ry = 0000;
//	int n;
	if (d1 < d2)
	{
		d1 += 30;
		m1 -= 1;
	}
	if (m1 < m2)
	{
		m1 += 12;
		y1 -= 1;
	}
	rd = d1 - d2;
	rm = m1 - m2;
	ry = y1 - y2;
	if (ki == 1)
	{
		int old = 1;
		if (ry < 0)
		{
			ry *= -1;
			old = 2;
		}
		if (rm < 0)
		{
			rm *= -1;
			old = 2;
		}
		if (rd < 0)
		{
			rd *= -1;
			old = 2;
		}
		if (ry > 0 && rm < 0 && rd < 0)
			old = 1;
		if (ry > 0 && rm >= 0 && rd < 0)
			old = 1;
		if (ry > 0 && rm < 0 && rd >= 0)
			old = 1;
		if (old == 1)
		{
			cout << name2 << " is " << ry << " years " << rm << " months " << rd << " days older than " << name1 << "\n";
		}
		if (old == 2)
		{
			cout << name1 << " is " << ry << " years " << rm << " months " << rd << " days older than " << name2 << "\n'";
		}
		return -1;
	}

	cout << "Hello " << name1 << "\n\tYou are " << ry << " years " << rm << " months " << rd << " days old !\n";

	if (ry == 0 && rm == 0)
	{
		cout << "Happy Birthday , dear " << name1 << "\n";
		return -1;
	}
	return ry;
}

// int UBD(int d1,int m1,int y1,int d2,int m2,int y2,int ryy);

int UBD(int d1, int m1, int y1, int d2, int m2, int y2, int ryy)
{
	int rd = 00, rm = 00, ry = 0000;
	y2 = y2 + (ryy + 1);

	if (d1 > d2)
	{
		d2 += 30;
		m2 -= 1;
	}
	if (m1 > m2)
	{
		m2 += 12;
		y2 -= 1;
	}
	rd = d2 - d1;
	rm = m2 - m1;
	ry = y2 - y1;

	hr();
	cout << "And " << ry << " years " << rm << " months " << rd << " days are remaining to come your " << ryy + 1 << " birthday \n";

	return 0;
}
int main()
{
	int d1 = 00, m1 = 00, y1 = 0000;
	int d2 = 00, m2 = 00, y2 = 0000;
	int rd = 00, rm = 00, ry = 0000;
	int n, c = 1, h = 0;
	int z;
	string name1 = "fuddu1", name2 = "fudu2";
xz:
	cout << "\t\t\tCalculation no : " << c << "\n";
	hr();
	cout << "Difference in age : Enter 1\n";
	int ki;
	cout << "Age and remaining days :Enter 2\n";
	cin >> ki;
	if(ki==1)
	  h=0;
	if (ki == 2)
		cout << "Enter your name : \n\t";
	if (ki == 1)
		cout << "Enter name of first person\n";
	fflush(stdin);
	getline(cin, name1);
	if (ki == 1)
	{
		cout << "Enter name of second person\n";
		fflush(stdin);
		getline(cin, name2);
	}
	hr();
	if (h == 0 )
	{
	entertdagain:
		if (ki == 2)
		{
			cout << "Enter today's date in given order(day , month, year) : \n";
		}
		if (ki == 1)
		{
			cout << "Enter birth date of first  person\n ";
		}
		cin >> d1 >> m1 >> y1;

		if (m1 > 12 || d1 > 31)
		{
			cout << "Wrong input ,please Enter again\n";
			getch();
			goto entertdagain;
		}
	}
	enterbdagain:
	
	if (ki == 2)
	{
		cout << "Enter your birth date in given order (day , month ,year) : \n ";
	}
	if (ki == 1)
	{
		cout << "Enter birth date of 2nd person\n ";
	}
	cin >> d2 >> m2 >> y2;
	if (ki == 2) //entry block for A & R.Ds
	{
		if (y2 > y1 || m2 > 12 || d2 > 31)
		{
			cout << "Wrong input , Enter again \t";
			getch();
			goto enterbdagain;
		}
		if (y2 == y1 && m2 >= m1 && d2 > d1)
		{
			cout << "Wrong input , Enter again \t";
			getch();
			goto enterbdagain;
		}
		if (y2 == y1 && m2 >= m1 && d2 == d1)
		{
			cout << "Wrong input , Enter again \t";
			getch();
			goto enterbdagain;
		}
	}
	if (ki == 1) //entry block for Cpr
	{
		if (m2 > 12 || d2 > 31)
		{
			cout << "Wrong input , Enter again \t";
			getch();
			goto enterbdagain;
		}
	}

	int ryy = age(d1, m1, y1, d2, m2, y2, name1, name2, ki);

	if (ryy >= 0)
		UBD(d1, m1, y1, d2, m2, y2, ryy);
	hr();
	hr();

	cout << "Wanna calculate again : Enter 1\n";
	cout << "Wanna end the program : Enter 0\n\t\t";
	cin >> h;
	if (h == 0)
	{
		cout << "\t= = = = = = = = = = = = = = = = = \n";
		return 0;
	}
	if (h == 1)
	{
		c++;
		goto xz;
	}
}
