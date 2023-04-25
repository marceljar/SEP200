//application showcasign pointers
#include <iostream>

int main() {
    
    char acronym[3] = {'a', 'b', 'c'};
    //(const void *) is used to avoid cout interpreting 
    //the pointer as a string
    std::cout << "The address of acronym is:" 
        << (const void*) acronym << std::endl; 
    std::cout << "The address of acronym[1] is :" 
        << (const void*) &acronym[1] << " or: " 
        << (const void*) (acronym + 1) << std::endl;
    std::cout << "The value of acronym[1] is: " 
        << acronym[1] << " or: " << *(acronym + 1) << std::endl;

    //printing the contents of acronym using syntactic candy
    for(int i = 0; i < 3; i++) {
        std::cout << acronym[i];
    }
    std::cout << std::endl;

    //printing the contents of acronym using pointer arithmetics
    char *ptr;
    ptr = acronym;
    for(int i = 0; i < 3; i++) {
        std::cout << *ptr++;
    }
    std::cout << std::endl;

    return 0;
}