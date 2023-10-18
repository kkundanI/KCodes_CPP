#include<iostream>
 using namespace std;

 class Test
 {
     public:
     void check()
     {
          int x,y;
          cout<<"Enter 1st number";
          cin>>x;
          cout<<"Enter 2nd number";
          cin>>y;
          int a;
          int d=  gcd(x,y);
          cout<< x/d << " : " << y / d << endl;      
     }

      int gcd(int x, int y) // 14, 21
      {
          int d;
          if(y>x)
          {
              y=x+y; 
              x=y-x; 
              y=y-x; 
          }
          for(int i=y; i>=1; i--)
          {
              if(x%i==0 && y%i==0 )
              {
                  d=i;
                  break;
              }
          }
          return d;
       }
   };


 int main()
 {
     Test t;
     t.check();
     return 0;
 }