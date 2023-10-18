#include<iostream>

using namespace std;
class kundan
{
	private:
	  int a,b;
	public:
	  void putdata()
	  {cout<<"Enter any two number ";
	  cin>>a>>b;
	  }
	  void getdata()
	  { cout<<"nos are "<<a<<","<<b;}
	  
};
class sany: public kundan
{ private:
     int x,y;
  public: 
     void putdata()
     { cout<<"Enter two no.s : ";
       cin>>x>>y;
     }
     void getdata()
     { cout<<"product of no.s "<<x*y;
     }
};
int main() {
	sany s;
	s.putdata();
	s.getdata();
	s.kundan::putdata();
	s.kundan::getdata();
	return 0;
}
