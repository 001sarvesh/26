// 6. Define a class student and write a program to enter student details using constructor
// and define member function to display all the details.

#include <iostream>
using namespace std;

class Student {
private:
  string name;
  int age;
  string address;
  string rollNumber;

public:
  // Constructor to enter student details
  Student(string n, int a, string ad, string rn) {
    name = n;
    age = a;
    address = ad;
    rollNumber = rn;
  }

  // Member function to display student details
  void displayDetails() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Address: " << address << endl;
    cout << "Roll Number: " << rollNumber << endl;
  }
};

int main() {
  // Enter student details using the constructor
  Student student("John Doe", 18, "123 Street, City", "A123");

  // Display student details
  student.displayDetails();

  return 0;
}
