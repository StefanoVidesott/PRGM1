// Elaborato dal pre-processore
/* Ricerca le righe precedute dal '#' che includono delle direttive per il compilatore */
#include <iostream>

int main() {

    char character;

    std::cout << "Enter a character: ";
    std::cin >> character;
    std::cout << character << " is the character entered" << std::endl;

    return 0;

}

// echo "z" | ./es
/* | invia informazioni al processo successivo */
