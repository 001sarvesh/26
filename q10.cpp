// 10. Define a class StaticCount and create a static variable. Increment this variable in a
// function and call this 3 times and display the result

#include <iostream>
using namespace std;

class StaticCount {
private:
  static int count; // Static variable

public:
  // Function to increment the static variable
  static void incrementCount() {
    count++;
  }

  // Function to display the static variable
  static void displayCount() {
    cout << "Count: " << count << endl;
  }
};

int StaticCount::count = 0; // Initializing the static variable

int main() {
  // Call the incrementCount() function three times
  StaticCount::incrementCount();
  StaticCount::incrementCount();
  StaticCount::incrementCount();

  // Display the value of the static variable
  StaticCount::displayCount();

  return 0;
}
