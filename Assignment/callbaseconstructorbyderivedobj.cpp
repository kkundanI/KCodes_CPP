#include<iostream>

using namespace std;
class getput
{
	private:
	  int a,b;
	public:
	  void putdata()
	  {cout<<"Enter any two number ";
	  cin>>a>>b;
	  }
	  void getdata()
	  { cout<<"nos are "<<a<<","<<b<<endl;}
	  
};
class product: public getput
{ private:
     int x,y;
  public: 
     void putdata()
     { cout<<"Enter two no.s : ";
       cin>>x>>y;
     }
     void getdata()
     { cout<<"product of no.s "<<x*y<<endl;
     }
};
int main() {
	product s;
	s.putdata();
	s.getdata();
	s.getput::putdata();
	s.getput::getdata();
	return 0;
}
