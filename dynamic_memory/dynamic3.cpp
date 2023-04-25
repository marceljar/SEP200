//application showcasing the danger of memory leaks
#include <iostream>

void print_numbers(int size);
void print_numbers(int size){
    int *array_numbers = new int[size];
    for(int i = 0; i < size; i++) {
        array_numbers[i] = i;
    }
    for(int i = 0; i < size; i++) {
        std::cout << array_numbers[i] << " ";
    }
    std::cout << std::endl;
    //delete [] array_numbers;
}

int main() {
    
    int size;
    std::cout << "Enter the size of your array" << std::endl;
    std::cin >> size;
    
    for (int i = 0; i < 100; i++){
        print_numbers(size); 
    }
    
    return 0;
}