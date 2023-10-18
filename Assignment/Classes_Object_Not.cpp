//get details of people and print it 
#include<iostream>
using namespace std;

class people {
    private:
     int age;
     char gender[6], name[20], dob[11], bldgrp[4], nof[20];
    public:
  
     void getdata(int i){
       
        cout<<"\nEnter Details for person"<<i+1<<" : \n";
        cout<<"Name : ";
        cin>>name;
        cout<<"\nFather's Name : ";
        cin>>nof;
        cout<<"\nAge : ";
        cin>>age;
        cout<<"\nSexuality : ";
        cin>>gender;
       
        cout<<"\nBlood group : ";
        cin>>bldgrp;
        cout<<"\nDate of Birth (DD/MM/YYYY) : ";
        cin>>dob;
      
     }
    void putdata(int i){
        // cout<<"Hello "<<name<<" here's your details : "<<endl;
        cout<<"\nDetails of Person"<<i+1<<" : \n";
        cout<<" Name : "<<name<<endl;
        cout<<" Father Name : "<<nof<<endl;
        cout<<" Age : "<<age<<endl;
        cout<<" Gender : "<<gender<<endl;
        cout<<" Date of Birth : "<<dob<<endl;
        cout<<" Blood Group : "<<bldgrp<<endl;
        cout<<"\n Have a good day ! "<<name<<endl;
    }

};
int main() {
   int n;
   cout<<"Enter no. of people : ";
   cin>>n;
   people member[n];
   for(int i=0;i<n;i++){
    member[i].getdata(i);
   }
   for(int i=0;i<n;i++){
    member[i].putdata(i);
   }
    return 0;

}
