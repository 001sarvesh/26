// 2. Define a class Time to represent a time with instance variables h,m and s to store
// hour, minute and second. Also define following member functions
// a. void setTime(int,int,int)
// b. void showTime()
// c. void normalize()
// d. Time add(Time)


#include <iostream>

class Time {
private:
    int hour;
    int minute;
    int second;

public:
    // Set the time
    void setTime(int hour, int minute, int second) {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }

    // Show the time
    void showTime() {
        std::cout << "Time: " << hour << ":" << minute << ":" << second << std::endl;
    }

    // Normalize the time to ensure values are within valid ranges
    void normalize() {
        if (second >= 60) {
            minute += second / 60;
            second %= 60;
        }
        if (minute >= 60) {
            hour += minute / 60;
            minute %= 60;
        }
        if (hour >= 24) {
            hour %= 24;
        }
    }

    // Add two times and return the result
    Time add(Time other) {
        Time result;
        result.second = second + other.second;
        result.minute = minute + other.minute;
        result.hour = hour + other.hour;
        result.normalize();  // Normalize the result to ensure valid time values
        return result;
    }
};

int main() {
    Time t1, t2, sum;

    // Set time for t1
    t1.setTime(8, 45, 30);

    // Set time for t2
    t2.setTime(2, 15, 40);

    // Show time for t1
    std::cout << "t1: ";
    t1.showTime();

    // Show time for t2
    std::cout << "t2: ";
    t2.showTime();

    // Add t1 and t2
    sum = t1.add(t2);

    // Show the sum
    std::cout << "Sum: ";
    sum.showTime();

    return 0;
}
