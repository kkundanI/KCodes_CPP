#include<iostream>
using namespace std;

int main() {
    int r=2,i=0,ri=0,f=0;
    int *n= new int[r];
    cout<<"Enter the Numbers : ";
    while(i<r+1){
        cin>>n[i];
        i++;
        if(i==r){
        
            cout<<"Enter increase in range : ";
            cin>>ri;
          
            if(ri!=0){
            int *nm= new int[r];
            for(int j=0;j<r;j++)
             nm[j]=n[j];
            delete []n;
            r+=ri;
            n=new int[r];
            for(int j=0;j<r;j++)
             n[j]=nm[j];
            delete []nm;
            }
            else
             break; 
    }
    }

    cout<<"Entered numbers are : ";
    for(int i=0;i<r;i++){
        cout<<n[i]<<" ";
    }

    return 0;
}
