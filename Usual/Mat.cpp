#include<iostream>
using namespace std;

int main() {
    int M1[3][3],M2[3][3];
    int S[3][3];
    int i=0,j=0;

   cout<<"Enter Matrix 1 : ";
      for( i=0;i<3;i++)
      { 
        for(j=0;j<3;j++)
          cin>>M1[i][j];
      }       
  cout<<"\nMatrix 1 : \n";
        for( i=0;i<3;i++)
      { cout<<"[";
        for(j=0;j<3;j++)
         { cout<<M1[i][j]<<" "; }
         cout<<"]\n";
      }   

    cout<<"\nEnter Matrix 2 : ";
      for( i=0;i<3;i++)
      { 
        for(j=0;j<3;j++)
          cin>>M2[i][j];
      }       
    cout<<"\nMatrix 2 : \n";
        for( i=0;i<3;i++)
      { cout<<"[";
        for(j=0;j<3;j++)
         { cout<<M2[i][j]<<" "; }
         cout<<"]\n";
      }   


 cout<<"\n Sum of Matrices M1 and M2 are : \n";
   for( i=0;i<3;i++)
      { cout<<"[";
     for(j=0;j<3;j++)
     {
      cout<<M1[i][j] + M2[i][j]<<" ";

      }
      cout<<"]"<<endl;  
      }
      
  
     
  return 0;
}