//Multiple Inheritance
#include<iostream>
using namespace std;

class Book {
    private: 
      int Bno;
      char Bname[20];
    public: 
      void getdata();
      void putdata();
};

class Author {
    private:
      char Aname[20];
    public:
      void getdata();
      void putdata();
};

class Bdetails : public Book , public Author {
    public: 
      void getdata();
      void putdata();
};

void Book :: getdata() {
    cout<<"Enter book name : ";
    cin>>Bname;
    cout<<"Enter book no. : ";
    cin>>Bno;
}

void Book :: putdata() {
    cout<<"Book name : "<<Bname<<endl;
    cout<<"Book number : "<<Bno<<endl;
}

void Author :: getdata() {
    cout<<"Enter Author name ";
    cin>>Aname;    
}

void Author :: putdata() {
    cout<<"Author name of the book is "<<Aname<<endl;
}

void Bdetails :: getdata() {
Book :: getdata();
Author :: getdata();
}

void Bdetails :: putdata() {
Book :: putdata();
Author :: putdata();
}

int main() {
    Bdetails A;
    A.getdata();
    
    A.putdata();
     return 0;
}