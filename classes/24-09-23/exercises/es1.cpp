#include <iostream>

int main() {

    bool a, b;
    std::cout << "+-------+-------+-------+-------+-------+" << std::endl;
    std::cout << "|     INPUT     |         OUTPUT        |" << std::endl;
    std::cout << "+-------+-------+-------+-------+-------+" << std::endl;
    std::cout << "| a\t" << "|" << " b\t" << "|" << "a && b\t|" << "a || b\t|" << "a ^ b\t|" << std::endl;
    std::cout << "+-------+-------+-------+-------+-------+" << std::endl;

    a = true;
    b = true;
    std::cout << "| " << a << "\t" << "| " << b << "\t" << "| " << (a && b) << "\t| " << (a || b) << "\t| " << (a ^ b) << "\t|" << std::endl;

    b = false;
    std::cout << "| " << a << "\t" << "| " << b << "\t" << "| " << (a && b) << "\t| " << (a || b) << "\t| " << (a ^ b) << "\t|" << std::endl;

    a = false;
    b = true;
    std::cout << "| " << a << "\t" << "| " << b << "\t" << "| " << (a && b) << "\t| " << (a || b) << "\t| " << (a ^ b) << "\t|" << std::endl;

    b = false;
    std::cout << "| " << a << "\t" << "| " << b << "\t" << "| " << (a && b) << "\t| " << (a || b) << "\t| " << (a ^ b) << "\t|" << std::endl;

    std::cout << "+-------+-------+-------+-------+-------+" << std::endl;

    return 0;

}