#include <iostream>

// Dato in input un carattere maiuscolo, ritorna lo stesso carattere
// minuscolo;

// a = 97
// A = 65

int main() {

    char uppercase, lowercase;
    int characterDifference = 'a' - 'A';

    std::cout << "Enter an uppercase character: ";
    std::cin >> uppercase;

    lowercase = uppercase + characterDifference;

    std::cout << lowercase << " is the character entered" << std::endl;

    return 0;

}