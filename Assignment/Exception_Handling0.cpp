//Exception : Negative Age 
#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter Your Age : ";
     A:  
     cin>>age;
    
     try {
        if(age<0)
         throw age;
     }
     catch(int age)
      {
        cout<<"Wrong Input : Age can't be negative !";
        cout<<"Enter your age again : ";
         goto A;
      }
     
 return 0;
}