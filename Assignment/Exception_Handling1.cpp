//Exception : Balance is Less than Withdrawal Amount !
#include<iostream>
using namespace std;
int main() {
    string Name;
    long int Ano, Bal,WAmount;
    cout<<"Enter Account holder Details : \n";
     cout<<"Name : ";
      cin>>Name;
    cout<<"Account Number : ";
     cin>>Ano;
    cout<<"Balance : ";
     cin>>Bal;
    cout<<"Withdrawal Amount : ";
     mout:
     cin>>WAmount;

      try{
        if(WAmount<Bal)
          throw WAmount;
      }
      catch(int Amount)
      {
        cout<<"Wrong Input :Insufficient  Balance !";
         cout<<"Enter Withdrawal amount again : ";
         goto mout;
      }
    return 0;
}