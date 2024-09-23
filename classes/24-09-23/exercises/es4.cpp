#include <iostream>

// Scrivere un programma che chiede all'utente di inserire un numero intero e
// determina se il numero è pari o dispari

int main() {

    int input;
    bool odd;

    std::cout << "Inserire il numero: ";
    std::cin >> input;

    odd = input & 1;

    std::cout << "Il numero è pari (0) dispari (1): " << odd << std::endl;
    // std::cout << "Il numero è " << (odd ? "dispari" : "pari") << std::endl;

}