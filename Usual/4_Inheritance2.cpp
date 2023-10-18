//Multilevel Inheritance
#include<iostream>
using namespace std;

class Car {
    private:
      char model[10],name[15];
    public: 
      void getdata();
      void putdata();      
};

class Car_N : public Car {
    private:
      int year;
      char carno[10];
    public:
      void getdata();
      void putdata();
};

class Car_D : public Car_N {
    public:
      void getdata();
      void putdata();
};

void Car :: getdata() {
    cout<<"Enter Model of Car : ";
    cin>>model;
    cout<<"Enter name of the Car : ";
    cin>>name;
}

void Car :: putdata() {
    cout<<"Car name is "<<name<<endl;
    cout<<"Car model = "<<model<<endl;
}

void Car_N :: getdata() {
    Car :: getdata();
    cout<<"Enter Car no. : ";
    cin>>carno;
    cout<<"Enter year of the car : ";
    cin>>year;
}

void Car_N :: putdata() {
    Car::putdata();
    cout<<"Car no. is "<<carno<<endl;
    cout<<"year of the Car = "<<year<<endl;
}

void Car_D :: getdata() {
    Car_N :: getdata();
}

void Car_D :: putdata() {
  Car_N :: putdata();
} 

int main() {
  Car_D Audi;
  Audi.getdata();
  Audi.putdata();
  return 0;
}