#include <iostream>
#include<cmath>
using namespace std;

class Prime {
private:
  int number;
  bool isPrime;

public:
  Prime(int number) {
    this->number = number;
    isPrime = true;

    for (int i = 2; i <= sqrt(number); i++) {
      if (number % i == 0) {
        isPrime = false;
        break;
      }
    }
  }

  bool sprime() {
    return isPrime;
  }
};

int main() {
  int number;

  cout << "Enter a number: ";
  cin >> number;

  Prime theNumber(number);
  
  if (theNumber.sprime()) {
    cout << number << " is a prime number." << endl;
  } else {
    cout << number << " is not a prime number." << endl;
  }

  return 0;
}
