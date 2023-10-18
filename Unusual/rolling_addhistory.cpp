//Rolling dice + multiple users
/* Works only on cxxdroid */
#include<iostream>
#include<conio.h>
#include<unistd.h>
	using namespace std;
int main()
{
	int u;
	aboveall:
	cout<<"Enter no. of users\n";
	cin>>u;
	int ch;
	aboveenterchances:
	cout<<"Enter no. of chances for each \n";
	cin>>ch;
	int i;
		for(i=0;i<u;i++){
	int j;
			for(j=0;j<ch;j++){
			  
			cout<<"Enter a key to roll the dice for user "<<i<<"\n";
			 	getch();
	int k;
		for(k=0;k<6;k++){
    int x=rand()%6+1; 
	clrscr();
      cout<<"User : "<<i+1<<","<<"chance : "<<j+1<<"\n";
      cout<<"Dice no. : "<<x;
     
       
   {   

    if(x==1)
   cout<<"\n\n\t\t*\t\t\n\n";
   if(x==2)
    cout<<"\n\t*\t\t\t\n\n\t\t\t*\n";
   if(x==3)
   cout<<"\n\t*\n\t\t*\n\t\t\t*\n";
    if(x==4)
   cout<<"\n\t*\t\t*\t\n\n\t*\t\t*\n";
   if(x==5)
   cout<<"\n\t*\t\t*\t\n\t\t*\t\t\n\t*\t\t*\t\n";
   if(x==6)
    cout<<"\n\t*\t*\n\t*\t*\n\t*\t*\n";
   }
   	usleep(100000);
   if(k!=5)
    clrscr();
		}}}
	
	int n;
	cout<<"To exit enter 0\n";
	cout<<"to play again for same no. of users : Enter 1\n";
	cout<<"To play again from begining : Enter any key\n";
	cin>>n;
	if(n!=0)
	{
		if(n==1)
		 goto aboveenterchances;
	    if(n!=1)
	     goto aboveall;
	}
	cout<<"Game's over go to sleep warna mummy marke bhut bna degi";

 return 0;
}
