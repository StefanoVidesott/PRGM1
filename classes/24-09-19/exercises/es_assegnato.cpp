#include <iostream>

int main() {

    const int invert = ('a' - 'A'); // 0b00100000 = 32

    char character;
    char output;
    bool flag;
    bool valid;

    std::cout << "Enter a character to convert it to the lower or upper one (A->a or a->A): ";
    std::cin >> character;

    // output = character ^ invert;
    // std::cout << "The relative one is = " << output << std::endl;

    valid = (character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z');

    std::cout << "The character is valid = " << valid << std::endl;

    flag = character <= 'Z';
    output = (((flag * (character + invert)) + (!flag * (character - invert))) * valid) + (!valid * '?');

    std::cout << character << " = " << output << std::endl;

    return 0;

}