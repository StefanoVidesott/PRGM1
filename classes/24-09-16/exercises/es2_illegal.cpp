#include <iostream>
#include <math.h>

/* Siete in autobus e volete essere sicuri
di avere sufficiente spazio attorno a voi
per distanziarsi dagli altri passeggeri.
_________________________________________________
Scrivere un programma che, dato in input il raggio,
calcoli l’area e la circonferenza di un cerchio. */

int main() {

    double radius, area, circumference;

    std::cout << "Enter the radius: ";
    std::cin >> radius;

    circumference = 2 * M_PI * radius;
    area = M_PI * std::pow(radius, 2);

    std::cout << "Circumference is:\t" << circumference << std::endl << "Area is:\t\t" << area << std::endl;
    std::cout << "(" << M_PI << " is the value of pi used)" << std::endl;

    return 0;

}