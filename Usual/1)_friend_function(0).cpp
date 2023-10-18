//
#include<iostream>
using namespace std;

class base 
{
    private:
        int n,a=0,b=1;
    public:
      base(){
        cout<<"Enter Range : ";
        cin>>n;
      }
       friend class Fib;
};

class Fib {
 public:
 
   base obj0;
  Fib() {
    cout<<endl<<obj0.n<<" Fibbonacci Numbers : "<<endl;
     if(obj0.n>0)
      cout<<obj0.a<<endl;
     if(obj0.n>1)
      cout<<obj0.b<<endl;
     if(obj0.n>2)
       {for(int i=2;i<obj0.n;i++){
            int k=obj0.a+obj0.b;
            obj0.a=obj0.b;
            obj0.b=k;
            cout<<k<<endl;
        }
       }
   }
};

int main() 
{
Fib obj1;
}