// C++ Program to demonstrate the
// functioning of a friend class
#include <iostream>
#define girlfriend friend
using namespace std;
 
class GF {
private:
    int private_variable;
 
protected:
    int protected_variable;
 
public:
    GF()
    {
        private_variable = 10;
        protected_variable = 99;
    }
 
    // friend class declaration
    girlfriend class F;
};
 

class F {
	private: 
	int a=5;
public:
    void display(GF& t)
    {
        cout << "The value of Private Variable = "
             << t.private_variable << endl;
        cout << "The value of Protected Variable = "
             << t.protected_variable;
    }
    
    girlfriend int add(F);
};
 int add(F k)
 {
 	
 	return (k.a+5);}
// Driver code
int main()
{
    GF g;
    F fri;
    fri.display(g);
    cout<<"\na = "<<add(fri);
    return 0;
}
