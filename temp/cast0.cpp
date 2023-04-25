//c-style casting example
#include <iostream>

int main(){

    int i = 0, *ptr;
    ptr = (int *) i; //casting an int as pointer to int
    
    std::cout << *ptr << std::endl;//segmentation fault

    return 0;
}