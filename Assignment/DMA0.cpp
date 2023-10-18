#include<iostream> 
using namespace std; 
 
int main() { 
 int n=5; 
 cout<<"Enter Range For Array : "; 
 cin>>n; 
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
 
    
    delete []q; 
     
    return 0; 
}
