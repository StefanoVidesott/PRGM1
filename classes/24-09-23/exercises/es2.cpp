#include <iostream>
#include <cmath>
#include <iomanip>

/* Utilizzando solo variabili di tipo “int”, dati in input un
dividendo, un divisore e il numero di cifre decimali
desiderate per la precisione (con troncamento), realizzare
un programma che calcola il risultato della divisione tra
dividendo e divisore con la precisione scelta. */

int main() {

    int dividend, divisor, precision, result, coefficent;
    int integerPart, decimalPart;

    std::cout << "Inserire il dividendo: ";
    std::cin >> dividend;
    std::cout << "Inserire il divisore: ";
    std::cin >> divisor;
    std::cout << "Inserire la precisione: ";
    std::cin >> precision;

    coefficent = std::pow(10, precision);
    result = dividend * coefficent;
    result /= divisor;

    integerPart = result / coefficent;
    decimalPart = std::abs(result % coefficent);

    std::cout << integerPart << "." << std::setw(precision) << std::setfill('0') << decimalPart << std::endl;

    return 0;

}