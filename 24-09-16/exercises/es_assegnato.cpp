#include <iostream>
#include <iomanip>
#include <bitset>

int main() {

    char character;
    int invert = ('a'-'A'); // 0b00100000 = 32

    std::cout << "Enter a character to convert it to the lower or upper one (A->a or a->A): ";
    std::cin >> character;

    std::cout << "The relative one is = " << (char)(character^invert) << std::endl;

    return 0;

}