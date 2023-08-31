// 7. Define a class Box and write a program to enter length, breadth and height and
// initialise objects using constructor also define member functions to calculate volume
// of the box.

#include <iostream>
using namespace std;

class Box {
private:
  double length;
  double breadth;
  double height;

public:
  // Constructor to initialize the box dimensions
  Box(double l, double b, double h) {
    length = l;
    breadth = b;
    height = h;
  }

  // Member function to calculate the volume of the box
  double calculateVolume() {
    return length * breadth * height;
  }
};

int main() {
  double l, b, h;

  // Enter the dimensions of the box
  cout << "Enter length: ";
  cin >> l;
  cout << "Enter breadth: ";
  cin >> b;
  cout << "Enter height: ";
  cin >> h;

  // Create a Box object using the constructor
  Box box(l, b, h);

  // Calculate and display the volume of the box
  cout << "Volume of the box: " << box.calculateVolume() << endl;

  return 0;
}
