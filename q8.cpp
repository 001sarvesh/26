//  8. Define a class Bank and define member functions to read principal , rate of interest
// and year. Another member functions to calculate simple interest and display it.
// Initialise all details using constructor.//

#include <iostream>
using namespace std;

class Bank {
private:
  double principal;
  double rate;
  double year;

public:
  // Constructor to initialize the bank details
  Bank(double p, double r, double y) {
    principal = p;
    rate = r;
    year = y;
  }

  // Member function to calculate the simple interest
  double calculateSimpleInterest() {
    return (principal * rate * year) / 100;
  }

  // Member function to display the simple interest
  void displaySimpleInterest() {
    double interest = calculateSimpleInterest();
    cout << "Principal: " << principal << endl;
    cout << "Rate of Interest: " << rate << "%" << endl;
    cout << "Year: " << year << endl;
    cout << "Simple Interest: " << interest << endl;
  }
};

int main() {
  double p, r, y;

  // Enter the bank details
  cout << "Enter principal: ";
  cin >> p;
  cout << "Enter rate of interest: ";
  cin >> r;
  cout << "Enter year: ";
  cin >> y;

  // Create a Bank object using the constructor
  Bank bank(p, r, y);

  // Display the simple interest
  bank.displaySimpleInterest();

  return 0;
}

