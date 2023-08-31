// 1. Define a class Complex to represent a complex number with instance variables a and
// b to store real and imaginary parts. Also define following member functions
// a. void setData(int,int)
// b. void showData()
// c. Complex add(Complex)

#include <iostream>

class Complex {
private:
    int real;
    int imaginary;

public:
    // Set the data of the complex number
    void setData(int real, int imaginary) {
        this->real = real;
        this->imaginary = imaginary;
    }

    // Show the data of the complex number
    void showData() {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }

    // Add two complex numbers and return the result
    Complex add(Complex other) {
        Complex result;
        result.real = real + other.real;
        result.imaginary = imaginary + other.imaginary;
        return result;
    }
};

int main() {
    Complex c1, c2, sum;

    // Set data for c1
    c1.setData(3, 4);

    // Set data for c2
    c2.setData(5, 2);

    // Show data for c1
    std::cout << "c1: ";
    c1.showData();

    // Show data for c2
    std::cout << "c2: ";
    c2.showData();

    // Add c1 and c2
    sum = c1.add(c2);

    // Show the sum
    std::cout << "Sum: ";
    sum.showData();

    return 0;
}

