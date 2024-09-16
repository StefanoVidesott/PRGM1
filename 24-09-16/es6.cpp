#include <iostream>

// Dati in input due numeri, dividendo e divisore, calcolate il quoziente e
// resto dell’operazione di divisione;

int main() {

    int dividend, divisor, resoult, rest;

    std::cout << "Enter the dividend: ";
    std::cin >> dividend;

    std::cout << "Enter the divisor: ";
    std::cin >> divisor;

    resoult = dividend / divisor;
    rest = dividend % divisor;

    std::cout << dividend << " / " << divisor << " = " << resoult << " (" << "rest: " << rest << ")" << std::endl;

}