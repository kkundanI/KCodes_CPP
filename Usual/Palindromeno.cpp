//palindrome no :
          /* reverse of the no. is same as actual no. ;*/
#include<iostream>

using namespace std;
int main() {
int n,d=0,rn=0;
cout<<"Enter a no.: ";
cin>>n;
int i=n;
while(i!=0)
{ d=i%10;
  rn= rn *10+d;
  i/=10;
  }
  if(rn==n)
  cout<<"yep no. is Palindrome .";
  else
   cout<<"No,no.is not an Palindrome no.";	
	return 0;
}
