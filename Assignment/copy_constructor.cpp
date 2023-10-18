// Implicit Copy constructor
#include<iostream>
using namespace std;

class s
{
		int id;
	public: 
		void init(int x){
			id=x;}
		void display(){
			cout<<endl<<"ID = "<<id;			}
	/*	s(){}
		s(s &t){
			id=t.id;
		}*/ //Explicit Copy constructor
};
			
int main() {
	s obj1;
	obj1.init(10);
	obj1.display();
	
	s obj2(obj1);
	
	obj2.display();
	return 0;
}
