//reinterpret_cast example
#include <iostream>

int main() {
    int num = 2;
    int* ptr;
    //casts a number as if it were an address (dangerous)
    ptr = reinterpret_cast<int*>(num);
    std::cout << ptr; //prints number as if it were an address
    //std::cout << &ptr; //segmentation fault
    return 0;
 }