//const_cast example
#include <iostream>

void print(char * char_ptr)
{
  std::cout << char_ptr << std::endl;
}

int main () {
    const char * char_ptr = "example text";
    //error, print expects a non-const char pointer
    //print(char_ptr);
    //this casting fixes the issue
    print(const_cast<char *>(char_ptr));
    return 0;
}