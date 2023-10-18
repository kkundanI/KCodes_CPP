// Cpp program to redirect cout to a file
#include <fstream>
#include <iostream>
#include <string>
#include<conio.h>

using namespace std;

int main()
{
    string txt,fname;
    cout<<"Enter the name of the file with extension : ";
    cin>>fname;
	system("cls");	
    cout << "Write anything in the text file below : " << endl;
    cout<<"{press double enter to end writing }\n\n\t";
    	fflush(stdin);
	getline(cin,txt);
   // cin >> txt;
	fstream file;
	file.open(fname, ios::out);
	string line;

	// Backup streambuffers of cout
	streambuf* stream_buffer_cout = cout.rdbuf();
	streambuf* stream_buffer_cin = cin.rdbuf();

	// Get the streambuffer of the file
	streambuf* stream_buffer_file = file.rdbuf();

	// Redirect cout to file
	cout.rdbuf(stream_buffer_file);

	cout << txt << endl;

	// Redirect cout back to screen
	cout.rdbuf(stream_buffer_cout);
	cout << "Text saved" << endl;

	file.close();
	return 0;
}
