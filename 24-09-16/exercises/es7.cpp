#include <iostream>

// Stampa a video la tabella di verità dell’operatore AND (&&) e OR (||);

int main() {

    bool a = true, b = true;
    std::cout << " OPER\t| a\t| b\t| OUT\t|" << std::endl;
    std::cout << "---------------------------------" << std::endl;
    std::cout << " AND\t| " << a << "\t| " << b << "\t| " << (a && b) << "\t|" << std::endl;
    a = false;
    std::cout << " AND\t| " << a << "\t| " << b << "\t| " << (a && b) << "\t|" << std::endl;
    a = true;
    b = false;
    std::cout << " AND\t| " << a << "\t| " << b << "\t| " << (a && b) << "\t|" << std::endl;
    a = false;
    std::cout << " AND\t| " << a << "\t| " << b << "\t| " << (a && b) << "\t|" << std::endl;
    a = true;
    b = true;
    std::cout << "---------------------------------" << std::endl;
    std::cout << " OR\t| " << a << "\t| " << b << "\t| " << (a || b) << "\t|" << std::endl;
    a = false;
    std::cout << " OR\t| " << a << "\t| " << b << "\t| " << (a || b) << "\t|" << std::endl;
    a = true;
    b = false;
    std::cout << " OR\t| " << a << "\t| " << b << "\t| " << (a || b) << "\t|" << std::endl;
    a = false;
    std::cout << " OR\t| " << a << "\t| " << b << "\t| " << (a || b) << "\t|" << std::endl;
    return 0;

}