//application showcasing the use of new and delete
#include <iostream>

int main() {
    
    int size;
    std::cout << "Enter the size of your array" << std::endl;
    std::cin >> size;
    
    char *my_array = new (std::nothrow) char[size];
    if (my_array == nullptr) {
        return false;
    } else {
        for(int i = 0; i < size; i++) {
            std::cout << "Enter a single character: ";
            std::cin >> my_array[i];
        }
    }
    std::cout << "You entered: " << my_array << std::endl;
    delete [] my_array; //deallocating memory
    
    return 0;
}