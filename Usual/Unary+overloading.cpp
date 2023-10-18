#include<iostream>
using namespace std;

class MyClass {
public:
  int value;

  MyClass(int value) : value(value) {}

  // Overload the unary addition operator.
  MyClass operator+() {
    return MyClass(value + 1);
  }
};

int main() {
  MyClass my_class(5);

  // Use the overloaded unary addition operator.
  my_class = +my_class;

  // Print the value of the new class.
  std::cout << my_class.value << std::endl;

  return 0;
}
