// 5. Define a class Date and write a program to Display Dateand initialise date object
// using Constructors.

#include <iostream>
using namespace std;

class Date {
private:
  int day;
  int month;
  int year;

public:
  // Default constructor
  Date() {
    day = 1;
    month = 1;
    year = 1900;
  }

  // Parameterized constructor
  Date(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
  }

  // Display date
  void displayDate() {
    cout << day << "/" << month << "/" << year << endl;
  }
};

int main() {
  // Create an object using the default constructor
  Date date1;

  // Display the default date
  cout << "Default Date: ";
  date1.displayDate();

  // Create an object using the parameterized constructor
  Date date2(4, 7, 2023);

  // Display the initialized date
  cout << "Initialized Date: ";
  date2.displayDate();

  return 0;
}
