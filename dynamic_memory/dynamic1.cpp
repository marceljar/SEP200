//application that tries to use arrays of variable size
#include <iostream>

int main() {
    
    int size;
    std::cout << "Enter the size of your array" << std::endl;
    std::cin >> size;
    
    char my_array[size];
    for(int i = 0; i < size; i++) {
        std::cout << "Enter a single character: ";
        std::cin >> my_array[i];
    }
    std::cout << "You entered: " << my_array << std::endl;
    
    return 0;
}