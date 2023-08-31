// 3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.

#include <iostream>

class Cube {
private:
    double side;

public:
    // Constructor to initialize the cube with a given side length
    Cube(double sideLength) {
        side = sideLength;
    }

    // Calculate the volume of the cube
    double calculateVolume() {
        return side * side * side;
    }
};

int main() {
    double sideLength;

    std::cout << "Enter the side length of the cube: ";
    std::cin >> sideLength;

    Cube cube(sideLength);

    double volume = cube.calculateVolume();

    std::cout << "Volume of the cube: " << volume << std::endl;

    return 0;
}

