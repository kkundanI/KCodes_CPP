#include<iostream>

using namespace std;

void clr(){
       cout<<"\033[%dm\033[2J\033[1;1f";
      }
int main() {
	cout<<"Jairaj"; 
	cout<<"kaif";
	clr();
	cout<<"just"; 
	return 0;
}
