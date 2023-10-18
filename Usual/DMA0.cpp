#include<iostream>
using namespace std;

int main() {
    int *p=NULL;
    p= new(nothrow) int ;
    if(!p)
     cout<<"Memory allocation failed \n";
    else 
     {
        *p = 29;
        cout<<"Value of p : "<<*p<<endl;
     }

     float *r = new float(75.25);
        cout<<"Value of r : "<<*r<<endl;

    int n=5;
    int *q = new(nothrow) int[n];
    if(!q)
      cout<<"Memory Allocation Failed ! \n";
    else
    {
        for(int i=0;i<n;i++)
          q[i]=i+1;
        cout<<"Value store in Block of memory :  ";
        for(int i=0;i<n;i++)
          cout<<q[i]<<" ";
       cout<<endl;
    }

    delete p;
    delete r;
    delete[] q;
    
    return 0;
}