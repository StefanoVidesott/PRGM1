#include <iostream>

int main() {

    int hours, minutes, seconds, total;

    std::cout << "Enter the hours: ";
    std::cin >> hours;

    std::cout << "Enter the minutes: ";
    std::cin >> minutes;

    std::cout << "Enter the seconds: ";
    std::cin >> seconds;

    total = seconds + 60*(minutes + 60*hours);
    std::cout << "The total seconds are: " << total << std::endl;

    return 0;

}