#include <iostream>
#include <conio.h>
using namespace std; 

int main()
{
 int* obj = new int[5];
 int* obc = new int[5];
 cout<<"Enter numbers : ";
 for(int i=0; i < 5; i++) {
  cin >> obj[i];
  obc[i] = obj[i];
 }
 delete[] obj;
 int s;
 cout << "Enter new size of array: ";
 cin >> s;
 s+=5;
 obj = new int[s];
 for(int i=0; i < s; i++) {
  if (i < 5) {
   obj[i] = obc[i];
   continue;
  }
  cin >> obj[i];
 }
 cout << "values : \n";
 for(int i = 0; i < s; i++) {
  cout << obj[i] << endl;
 }
 return 0;
}
