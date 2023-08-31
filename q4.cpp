// 4. Define a class Counter and Write a program to Show Counter using Constructor.

#include <iostream>

class Counter {
private:
    int count;

public:
    // Constructor to initialize the counter with a default value of 0
    Counter() {
        count = 0;
    }

    // Constructor to initialize the counter with a given value
    Counter(int initialValue) {
        count = initialValue;
    }

    // Display the value of the counter
    void displayCount() {
        std::cout << "Count: " << count << std::endl;
    }
};

int main() {
    Counter defaultCounter;  // Create a counter with default value (0)
    Counter customCounter(10);  // Create a counter with a custom value (10)

    // Display the value of the default counter
    defaultCounter.displayCount();

    // Display the value of the custom counter
    customCounter.displayCount();

    return 0;
}
