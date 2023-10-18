#include <iostream>
#include<cmath>
using namespace std;

class ArmstrongNumber {
    private:
  int number;
public:
  ArmstrongNumber(int number) {
    this->number = number;
  }
    
  bool isArmstrong() {
    int sum = 0, nod=0;
    int temp = number;
    int n=temp;
    while(n){
        n/=10;
        nod++;
    }
    while (temp > 0) {
      int digit = temp % 10;
      sum += pow(digit, nod);
      temp /= 10;
    }

    return sum == number;
  }


};

int main() {
  int number;

  cout << "Enter a number: ";
  cin >> number;

  ArmstrongNumber armstrongNumber(number);

  if (armstrongNumber.isArmstrong()) {
    cout << number << " is an Armstrong number." << endl;
  } else {
    cout << number << " is not an Armstrong number." << endl;
  }

  return 0;
}
