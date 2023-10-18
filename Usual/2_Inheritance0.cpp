// Simple Inheritance
#include<iostream>
using namespace std;

class student {
    private:
      char n[20],r[5];
      public:
        void getdata();
        void putdata();

};

class marks : public student 
{
    private:
      int p,c,m;
    public:
     void getdata();
     void putdata();
};

void student :: getdata() {
    cout<<"Enter name : ";
    cin>>n;
    cout<<"Enter Roll number : ";
    cin>>r;

};



void student :: putdata() {
    cout<<"Name : "<<n<<endl;
    cout<<"Roll number : "<<r<<endl;
}

void marks :: getdata() {
    student::getdata();
    cout<<"Enter Marks in phy , chem , Math : ";
    cin>>p>>c>>m;
}

void marks :: putdata() {
    student::putdata();
    cout<<"Marks in Phy, Chem, Math : "<<p<<","<<c<<","<<m<<endl;
    cout<<"Total Marks : "<<p+c+m<<endl;
}

int main() {
    marks Sem2;
    Sem2.getdata();
    Sem2.putdata();
    return 0;
}
