//Hierarchical Inheritance
#include<iostream>
using namespace std;

void hr ( char );
class vehicle {
    protected:
       char n[20];
       int wheeelcount;
    public:
       void getdata() {
        hr('*');
        cout<<"Enter the name of Vehicle : ";
        cin>>n;
        cout<<"Enter no. of wheel : ";
        cin>>wheeelcount;
       }
       void putdata() {
        hr('-');
        cout<<"Name of vehicle : "<<n<<endl;
        cout<<"Number of wheels : "<<wheeelcount<<endl;
       }
};

class lightmotor : public vehicle 
{
    protected:
     int speedlimit;
   public:
     void getdata(){
     
      vehicle :: getdata();
      cout<<"Enter speedlimit : ";
      cin>>speedlimit;
     }
     void putdata(){
   
      vehicle :: putdata();
      cout<<"Speedlimit is : "<<speedlimit;
     }
};

class heavymotor : public vehicle {
    protected:
     int loadcapacity;
     char permit[20];
   public:
     void getdata(){
    
      vehicle :: getdata();
      cout<<"Enter Load capacity of vehicle : ";
      cin>>loadcapacity;
      cout<<"Enter permit of vehicle : ";
      cin>>permit;
     }
     void putdata(){
     
      vehicle :: putdata();
      cout<<"Load capacity is : "<<loadcapacity<<endl;
      cout<<"Permit of vehicle : "<<permit<<endl;
     }
};

class gearmotor : public lightmotor {
  protected:
    int gearcount;
  public:
    void getdata(){
     
      lightmotor::getdata();
      cout<<"Enter gear of vehicle : ";
      cin>>gearcount;
    }
    void putdata() {
     
      lightmotor::putdata();
      cout<<"Gear of the vehicle : "<<gearcount<<endl;
    }
};

class non_gearmotor : public lightmotor {
  public:
   void getdata() {
  
    lightmotor::getdata();
   }
   void putdata() {
    
    lightmotor::putdata();
   }
};

class passenger : public heavymotor {
  private:
   int sitting , standing;
  public:
   void getdata() {
    
    heavymotor::getdata();
    cout<<"Enter Sitting capacity of vehicle : ";
    cin>>sitting;
    cout<<"Enter Standing capacity of vehicle : ";
    cin>>standing;
   }
   void putdata() {
 
    cout<<"Sitting Capacity : "<<sitting<<endl;
    cout<<"Standing Capacity : "<<standing<<endl;
   }
};
class goods : public heavymotor {
  public:
   void getdata() {
   
    heavymotor::getdata();
   }
   void putdata() {
   
    heavymotor::putdata();
   }
};

int main() {
  gearmotor obj1;
  non_gearmotor obj2;
  passenger obj3;
  goods obj4;

  obj1.getdata();
  obj1.putdata();
  obj2.getdata();
  obj2.putdata();
  obj3.getdata();
  obj3.putdata();
  obj4.getdata();
  obj4.putdata();
  return 0;
}

void hr(char a) {
  
 
    if(a=='-')
    cout<<"!---------------!";
    if(a=='*')
     cout<<"!**************!";
  
  cout<<endl;
  
}