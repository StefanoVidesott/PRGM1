#include <iostream>

/* Vi hanno incaricato di misurare la temperatura a tutti
i partecipanti al famosissimo corso di programmazione
dell’Università di Trento. Purtroppo, il termometro in
dotazione è settato solo in Fahrenheit!
_______________________________________________________
Scrivere un programma che, data in input una
temperatura in Fahrenheit, ritorni a video il corretto
valore in Celsius. */

double FarenheitToCelsius(double _farenheit) {

    double resoult = (_farenheit - 32) / 1.8;
    return resoult;

}

int main() {

    double farenheit, celsius;

    std::cout << "Enter the farenheit temperature: ";
    std::cin >> farenheit;

    celsius = FarenheitToCelsius(farenheit);

    std::cout << "Farenheit:\t" << farenheit << std::endl << "Celsius:\t" << celsius << std::endl;

    return 0;

}