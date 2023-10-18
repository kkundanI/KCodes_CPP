#include<iostream>
using namespace std;

int main() {
    int n=2,i,m=n;
    int *num = new int[n];
     cout<<"Enter numbers : ";
    for(i=0;i<n+1;i++){
      
        if(i>=n){
            int *p= new int[n];
            for(int j=0;j<n;j++){
                p[j]=num[j];
            }
            delete []num;
            n=i+1;
            cout<<"\n n after change : "<<n<<endl;
            int *num = new int[n];
             for(int j=0;j<n;j++){
                num[j]=p[j];
            }
            delete []p;
        }
          cin>>num[i];
        }
      cout<<"Result : \n";
        for(i=0;i<n;i++){
            cout<<num[i]<<"\t";
        }

    return 0;
}