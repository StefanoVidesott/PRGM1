#include <iostream>

int main() {

    int hours, minutes, seconds, total;

    std::cout << "Enter the total time in seconds to convert it to hours, minutes and seconds: ";
    std::cin >> total;

    hours   = total / (60*60);
    total   = total % (60*60);
    minutes = total / 60;
    seconds = total % 60;

    std::cout << "The time is: " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds." << std::endl;

    return 0;

}