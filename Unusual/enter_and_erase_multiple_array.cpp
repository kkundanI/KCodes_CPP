/*Erase multiple  no.s from an array */
#include<iostream>
using namespace std;
 int main()
 {
   int n;
   cout<<"Enter Absolute range : ";
   cin>>n;
   int a[n];int i,j,m;
    for(i=0;i<n;i++)
    { cout<<"Enter element "<<i+1<<"\t";
     cin>>a[i];
    }
    xxx:
   cout<<"Enter range to erase : ";
   cin>>m;
     if(m>n)
   {
    cout<<"range is larger than absolute range so enter range again\n ";
    goto xxx;
   }
    int b[m],ff=0;
   for(j=0;j<m;j++)
   {cout<<j+1<<" no. to erase ";
    cin>>b[j];
     ff=0;
    for(i=0;i<n;i++)
     { if(b[j]==a[i])
           ff++;
        }
        if(ff==0)
         {cout<<"This no. isn't' in absoute array \n";
           j-=1;} 
        cout<<"\n";
   }
    int f=0;
    cout<<"Elements after erasing : ";
  for( i=0;i<n;i++)
   {f=0;
   for(j=0;j<m;j++)
    {  
       if(a[i]==b[j])
       f=1;
      }
      if(f!=1)
      cout<<a[i]<<"\n";
     }
    return 0;
 }
     
    	