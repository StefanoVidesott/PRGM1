#include <iostream>

// Date in input due variabili (scegliete voi il loro tipo), a e b,
// scrivere un programma che scambi il valore di a al valore
// di b e viceversa.

int main() {

    int a, b;

    std::cout << "Inserire il valore di a: ";
    std::cin >> a;
    std::cout << "Inserire il valore di b: ";
    std::cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    std::cout << "Il valore di a è: " << a << std::endl;
    std::cout << "Il valore di b è: " << b << std::endl;

    return 0;

}