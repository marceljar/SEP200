//application showcasing getline
#include <iostream>


int main() {
    
    char first[32], second[32], third[32];
    std::cout << "Enter three strings: ";
    std::cin >> first >> second >> third;

    std::cout << "You entered: " <<  first 
    << ", " <<  second << " and "<<  third 
    << std::endl;

    std::cout << "Enter a string with any number of spaces: ";
    std::cin.ignore();
    std::cin.getline(first, 32);
    std::cout << "You entered the string with spaces: " 
    << first << std::endl;

    return 0;
}