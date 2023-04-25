#include <iostream>
#include "database.h"

int main() {
    //char first_name[16] = { "john" };
    //char last_name[16] = { "smith" };
    //Data oop344(first_name, last_name, 3.2);
    //oop344.list_students();

    Data oop244;
       
    char choice;
    while (true) {
        std::cout << "Add a new students (a), list all students (l), or quit (q)?";
        std::cin >> choice;
        if (choice == 'a') {
            if (!oop244.add_student()) {
                std::cout << "Could not add student. Exiting." << std::endl;
                return 1;
            }
        } else if (choice == 'l') {
            oop244.list_students();
        } else {
            break;
        }
    }


    
    return 0;
}