#include <iostream>

int main() {

    int a, b, result;

    std::cout << "Enter the value of 'a':";
    std::cin >> a;


    std::cout << "Enter the value of 'b':";
    std::cin >> b;

    result = a - b;
    result *= ((result < 0) * -2) + 1;

    std::cout << "Il risultato in valore assoluto vale: |" << a << " - " << b << "| = " << result << std::endl;

    return 0;

}