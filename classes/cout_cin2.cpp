//application showcasing getline
#include <iostream>
#include<limits> //defines std::numeric_limits
#include<ios> //defines std::streamsize

int main() {
    
    char first[32], second[32], third[32];
    std::cout << "Enter three strings: ";
    std::cin >> first >> second >> third;

    std::cout << "You entered: " <<  first 
    << ", " <<  second << " and "<<  third 
    << std::endl;

    std::cout << "Enter a string with any number of spaces: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.getline(first, 32);
    std::cout << "You entered the string with spaces: " 
    << first << std::endl;

    return 0;
}
