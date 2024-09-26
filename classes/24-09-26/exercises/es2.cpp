#include <iostream>

int main() {

    int a, b, max, min;

    std::cout << "Inserire il primo valore: ";
    std::cin >> a;

    std::cout << "Inserire il secondo valore: ";
    std::cin >> b;

    max = (a>=b) * a + (b>a) * b;
    min = (a>=b) * b + (b>a) * a;

    std::cout << "Valore maggiore: " << max << std::endl << "Valore minore: " << min << std::endl;

    return 0;

}