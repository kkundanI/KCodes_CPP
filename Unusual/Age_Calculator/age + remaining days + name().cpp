// calculate age
#include <iostream>
#include <string.h>
using namespace std;
int age(int d1, int m1, int y1, int d2, int m2, int y2, int i, string name);
int UBD(int d1, int m1, int y1, int d2, int m2, int y2, int ryy);

int main()
{
	int d1 = 00, m1 = 00, y1 = 0000;
	int d2 = 00, m2 = 00, y2 = 0000;
	int rd = 00, rm = 00, ry = 00;
	int n, c = 1, h = 0;
	int i = 5;
	string name;
xz:
  
	cout << "\t\t\t\tCalculation no : " << c;
	// declaring a string variable name to store user's name
	cout << "\n\t= = = = = = = = = = = = = = = = = = = = = = = =\n ";
	i = c - 1;
	cout << "\nEnter your name :\n\t";
	getline(cin, name);
	cout << "\n- - - - - - - - - - - - - - - - - -\n";
	if (h == 0)
	{
		cout << "Enter today's date in given order (day , month , year) : \t";
		cin >> d1 >> m1 >> y1;
	}
	cout << "Enter your birth date in given order (day , month , year) : \t";
	cin >> d2 >> m2 >> y2;

	int ryy = age(d1, m1, y1, d2, m2, y2, i, name); // calling age function ;
	if (ryy > 0)
		UBD(d1, m1, y1, d2, m2, y2, ryy); //calling remaining days function
	cout << "\n- - - - - - - - - - - - - - - - - -\n";
	cout << "\n- - - - - - - - - - - - - - - - - -\n";

	cout << "wana calculate again : Enter 1\n";
	cout << "wana end the program : Enter 0\n\t\t  ";
	cin >> h;
	if (h == 0)
	{
		cout << "\t= = = = = = = = = = = = = = = = = = = = = = = =\n ";

		return 0;
	}
	if (h == 1)
		c++;
	goto xz;
}

//Defining age function

int age(int d1, int m1, int y1, int d2, int m2, int y2, int i, string name)
{
	int rd = 00, rm = 00, ry = 00;
	int n;

	if (d1 < d2)
	{
		n = (d2 - d1) / 30;
		n += 1;
		//cout<<n<<"\n";
		m1 -= n;
		d1 = (n * 30) + d1;
	}
	n = 0;
	if (m1 < m2)
	{
		n = (m2 - m1) / 12;
		n += 1;
		//cout<<n<<"\n";
		y1 -= n;
		m1 = (n * 12) + m1;
	}
	n = 0;
	ry = y1 - y2;
	rm = m1 - m2;
	rd = d1 - d2;
	cout << " - - - - - - - - - - - - - - - - - - - - - \n";
	cout << name << "\n";
	cout << "you are " << ry << "years " << rm << "months " << rd << "days old !\n";
	if (rd == 0 && rm == 0)
	{
		cout << "Happy Bithday dear " << name;
		return -1;
	}
	return ry;
}

//defining remaining days function

int UBD(int d1, int m1, int y1, int d2, int m2, int y2, int ryy)
{
	int rd = 00, rm = 00, ry = 00;
	int n;

	y2 = y2 + (ryy + 1);
	/* 01/10/2003 - birthday , and on 03/03/2023 my age is 19 +
     so my next birth day will be my 20th birthday that means 01/10/2023,now 
     to find remaining days to come my next birthday will be 01/10/2023 minus 03/03/2023 . */
	/* so, after my DOB  becomes 01/10/2023 , i'll check whether (03/03/2023)
     m2 is less than m1 or not (same goes for days too)'*/
	if (d2 < d1)
	{
		n = (d1 - d2) / 30;
		n += 1;
		//	cout<<"for days\t"<<n<<"\n";
		//n=1{D0B : 23 03 2005 , TODAY : 03 03 2023 }RED ALERT removed
		m2 -= n;
		d2 = (n * 30) + d2;
	}
	n = 0;
	if (m2 < m1)
	{
		n = (m1 - m2) / 12;
		n += 1;
		//	 cout<<"for months \t"<<n<<"\n";
		//n=2{D0B : 23 03 2005 , TODAY : 03 03 2023 }RED ALERT removed
		y2 -= n;
		m2 = (n * 12) + m2;
	}
	n = 0;

	ry = y2 - y1;
	rm = m2 - m1;
	rd = d2 - d1;
	cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - \n";
	//cout<<name<<"\n";
	cout << "And,\n";
	cout << ry << "years " << rm << "months " << rd << "days "
		 << "are remaining to come your birthday\n";
	return 0;
}