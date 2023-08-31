// 9. Define a class Bill and define its member function get() to take detail of customer ,
// calculateBill() function to calculate electricity bill using below tariff :
// Upto 100 unit RS. 1.20 per unit
// From 100 to 200 unit RS. 2 per unit
// Above 200 units RS. 3 per unit.

#include <iostream>
using namespace std;

class Bill {
private:
  string customerName;
  int unitsConsumed;
  double totalBill;

public:
  // Member function to get customer details
  void get() {
    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter units consumed: ";
    cin >> unitsConsumed;
  }

  // Member function to calculate the electricity bill
  void calculateBill() {
    if (unitsConsumed <= 100) {
      totalBill = unitsConsumed * 1.20;
    } else if (unitsConsumed > 100 && unitsConsumed <= 200) {
      totalBill = 100 * 1.20 + (unitsConsumed - 100) * 2;
    } else {
      totalBill = 100 * 1.20 + 100 * 2 + (unitsConsumed - 200) * 3;
    }
  }

  // Member function to display the electricity bill
  void displayBill() {
    cout << "Customer Name: " << customerName << endl;
    cout << "Units Consumed: " << unitsConsumed << endl;
    cout << "Total Bill: Rs. " << totalBill << endl;
  }
};

int main() {
  Bill bill;

  // Get customer details
  bill.get();

  // Calculate the electricity bill
  bill.calculateBill();

  // Display the electricity bill
  bill.displayBill();

  return 0;
}
