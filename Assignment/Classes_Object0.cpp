#include<iostream>
#include<string.h>
using namespace std;

class Human {
    private:
     int age;
     char gender[6] , name[20];
    public:
     
     void getdata(){
        cout<<"\nEnter Your Name : ";
        cin>>name;
        cout<<"\n Enter your Age : ";
        cin>>age;
        cout<<"Enter your Sexuality : ";
        cin>>gender;
      
     }
    void putdata(){
        cout<<"Hello "<<name<<" here's your details : "<<endl;
        cout<<" Name : "<<name<<endl;
        cout<<" Age : "<<age<<endl;
        cout<<" Gender : "<<gender<<endl;
        cout<<"\n Have a good day ! "<<endl;
    }

};
int main() {
    Human Sukuna;
    Sukuna.getdata();
    Sukuna.putdata();
    return 0;

}