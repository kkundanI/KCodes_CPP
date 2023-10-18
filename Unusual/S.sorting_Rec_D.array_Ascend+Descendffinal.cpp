//selection Sorting with Recursion
/* Works only on cxxdroid */
#include<iostream>

using namespace std;

void swap(int* a,int* b)
 { int swp;
 swp = *a;
 *a=*b;
 *b=swp;
 }
 
void pcheck(int m,int a[m])
 { int i;
   for(i=0;i<m;i++)
    cout<<a[i]<<"\n";
 }
 
int sorting(int m,int a[m] ,int i,int z)
  {int j;
   if(i==m-1)
    {
     cout<<"After Sorting :\n";
      pcheck(m,a);
     return 0;
    }
   else
     { for(j=i+1;j<m;j++)
       { if(z==1)
        {if(a[i]>a[j])
           swap(a[i] ,a[j] );
        }
        if(z==2)
        {if(a[i]<a[j])
           swap(a[i] ,a[j] );
        }
       
        }
        i++;
      sorting(m,a,i,z);
     }
     
    
   }

  	
 int main()
 {
    int i,m,z;
    xxx:
    cout<<"To Arrange in Ascending order , Enter 1 : \n";
    cout<<"To Arrange in Descending order , Enter 2 : \n";
     cin>>z;
    if(z!=1 && z!=2)
     {
     	cout<<"\nWrong input , Enter againg \n";
     	goto xxx;
     }
    cout<<"\nEnter Range of Array : \t";
    
    cin>>m;
    int a[m];  
    for(i=0;i<m;i++)
    {
    cout<<"Enter element "<<i+1<<"\t";
    cin>>a[i];
    cout<<"\n";
    }   
   system("cls");
    cout<<"Before Sorting :\n";
     pcheck(m,a);
  sorting(m,a,0,z);
   
  return 0;
  } 	 
