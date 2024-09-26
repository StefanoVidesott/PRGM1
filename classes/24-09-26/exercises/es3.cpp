#include <iostream>

int main() {

    int a, next, prev;

    std::cout << "Inserire il valore di 'a': ";
    std::cin >> a;

    next = ++a;
    prev = ----a;

    std::cout << "In numero successivo ad 'a' vale: " << next << std::endl << "In numero precedente ad 'a' vale: " << prev << std::endl;

    return 0;

}