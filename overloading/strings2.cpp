#include <iostream>
#include <string>
//#include <cstring> //for c_str()

void print_with_spaces(const char *name) {
    int i = 0;
    while (name[i] != '\0') {
        std::cout << name[i] << " ";
        i++;
    }
    std::cout << std::endl;
}

int main()
{

    std::string full_name;
    char name[256] = "Marcel Jar", name_title[256];
  
    full_name = name;
    full_name = "Master " + full_name;
    
    std::cout << full_name.length() << std::endl;
    print_with_spaces(full_name.c_str());
    
    full_name.copy(name_title, full_name.length() + 1, 0);
    print_with_spaces(name_title);

    return 0;
}