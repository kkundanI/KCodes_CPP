//find small number in array
#include<iostream>
using namespace std;
int main()
{
    int i, n[5],small;
    cout<<"enter any 5 no:-";
    for(i=0;i<5;i++)
    cin>>n[i];
    cout<<"output\n";
    for(i=0;i<5;i++)
    { if(n[i+1]<n[i])
       small=n[i+1];
       }
    cout<<small;
    cout<<endl;
    
    
   
    return 0;
}
