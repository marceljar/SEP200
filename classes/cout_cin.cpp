//application showcasing cout and cin methods
#include <iostream>
#include<iomanip> //for setprecision


int main() {
    
    float pi = 3.141592653, e = 2.718281828, 
    golden_ratio = 1.618033988, my_number;
    
    //display some famous constants
    std::cout << std::setprecision(4) << std::fixed << 
        "Pi with four decimal digits is: " << pi << std::endl;
    std::cout << std::setprecision(5) << std::fixed << 
        "Euler's number with five decimal digits is: " 
        << e << std::endl;
    std::cout <<  std::defaultfloat << 
        "The golden ratio is: " << golden_ratio << std::endl;
    
    //display a provided float
    std::cout << "Enter a float: " << std::endl;
    std::cin >> my_number;
    std::cout << std::setprecision(4) << std::fixed << 
        "My number with four decimal digits is: " 
        << my_number << std::endl; 
    std::cout << std::setprecision(5) << std::fixed << 
        "My number with five decimal digits is: " 
        << my_number << std::endl;
    std::cout <<  std::defaultfloat << 
        "My number is: " << my_number << std::endl;

    return 0;
}