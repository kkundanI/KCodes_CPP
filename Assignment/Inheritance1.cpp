#include <iostream>

using namespace std;

class Shape {
public:
  virtual void draw() {
    cout << "Shape draw." << endl;
  }
};

class Circle : public Shape {
public:
  void draw() override {
    cout << "Circle draw." << endl;
  }
};

class Square : public Shape {
public:
  void draw() override {
    cout << "Square draw." << endl;
  }
};

int main() {
  Shape* shapes[2];

  shapes[0] = new Circle();
  shapes[1] = new Square();

  for (int i = 0; i < 2; i++) {
    shapes[i]->draw();
  }

  for (int i = 0; i < 2; i++) {
    delete shapes[i];
  }

  return 0;
}
