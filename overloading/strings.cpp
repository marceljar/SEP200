#include <iostream>
#include <string>

int main()
{

    std::string first_name, last_name, full_name;
  
    std::cout << "Enter first and last name separated by a space: ";
    std::cin >> first_name;
    std::cin >> last_name;
  
    std::cout << "The provided name was: ";
    std::cout << first_name << " " << last_name << std::endl;

    full_name = first_name + " " + last_name;

    std::cout << "Again, the provided name was: ";
    std::cout << full_name << std::endl;

    std::cout << "The provided name has: " << 
            full_name.length() << " characters." << std::endl;

    return 0;
}