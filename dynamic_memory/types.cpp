//application showcasing types
#include <iostream>

struct Person{
   int age;
   int size;
   char initial;
};

int main() {
    
   int age = 36;
   float size = 5.9;
   char acronym[3] = {'a', 'b', 'c'};
   Person john;

   std::cout << "Size of int: " << sizeof(int) <<std::endl;
   std::cout << "Size of float: " << sizeof(float) <<std::endl;
   std::cout << "Size of char: " << sizeof(char) <<std::endl;
   std::cout << "Size of Person: " << sizeof(Person) <<std::endl;

   return 0;
}