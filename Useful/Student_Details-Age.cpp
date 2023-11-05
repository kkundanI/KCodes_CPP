//Negative Age  in Students Details 
#include<iostream>
using namespace std;

void HL(int n){
     for(int i=0;i<n;i++)
       {cout<<"-";}
    cout<<endl;
}

int main() {

 int n;
    cout<<"Enter Number of Students : ";
    cin>>n;

 string SName[n],SClass[n];
 int SRno[n],SAge[n],SFee[n];
 cout<<"\t\tEnter Students Details :\n";
   
  for(int i=0;i<n;i++){
    cout<<"\tFor Student "<<i+1<<endl;
    cout<<"Name : ";
     cin>>SName[i];
    cout<<"Age : ";
     age:
     cin>>SAge[i];
      
       try{
         if(SAge[i]<0)
          { cout<<"\tWrong Input !\n";
            throw SAge[i];
          }
       }
       catch(int s)
        {

            cout<<"Enter Age for Student "<<i+1<<" Again : ";
            goto age;
        }
    cout<<"Class : ";
     cin>>SClass[i];
    cout<<"Roll Number : ";
     cin>>SRno[i];
    cout<<"Fee : ";
     cin>>SFee[i];
  }
 
  cout<<"\n\t\tStudents Details : \n";
   HL(40);
  for(int i=0;i<n;i++){
    cout<<"Student "<<i+1<<endl;
        HL(15);
    cout<<"Name : "<<SName[i]<<endl;
    cout<<"Age : "<<SAge[i]<<endl;
    cout<<"Class : "<<SClass[i]<<endl;
    cout<<"Roll Number : "<<SRno[i]<<endl;
    cout<<"Fee : "<<SFee[i]<<endl<<endl;
        HL(20);
  }
  
 return 0;
}