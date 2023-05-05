#include <iostream>
#include "student.h"

void Student::edit() {
    std::cout << "Enter the first name: " <<std::endl;
    std::cin >> first_name_;
    std::cout << "Enter the last name: " <<std::endl;
    std::cin >> last_name_;
    std::cout << "Enter the gpa: " <<std::endl;
    std::cin >> gpa_;
}

void Student::display(){
    std::cout << "--------------------" << std::endl;
    std::cout << "Student's name: " << 
        first_name_ << " " << last_name_ << std::endl;
    std::cout << "Student's gpa: " << gpa_ << std::endl;
}
