//static_cast example
#include <iostream>

int main() {
    double hours;
    int minutes;

    std::cout << "Enter minutes : ";
    std::cin >> minutes;
    //casts the int minutes as a double prior to division
    hours = static_cast<double>(minutes)/ 60;
    std::cout << "In hours, this is " << hours;

}