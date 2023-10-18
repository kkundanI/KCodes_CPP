#include<iostream>
using namespace std;

class Fb {
	private:
		int a=0,b=0,c=0;
		
	public:
	 Fb(){
		cout<<"Enter Any the numbers : ";
	cin>>a>>b>>c;
	 }
		friend void Find (Fb );
};

void Fib (Fb f) {
	
}
 int main() {
	
  
	return 0;
}
