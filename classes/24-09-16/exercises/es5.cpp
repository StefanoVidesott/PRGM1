#include <iostream>

// Dato in input il raggio di un cerchio, calcola il volume della sfera
// corrispondente;

int main() {

    double radius, volume, pi = 3.1415;

    std::cout << "Enter the radius: ";
    std::cin >> radius;

    volume = 4/3 * pi * radius * radius * radius;

    std::cout << "Volume is:\t" << volume << std::endl;
    std::cout << "(" << pi << " is the value of pi used)" << std::endl;

}