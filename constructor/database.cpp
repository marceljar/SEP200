#include <iostream>
#include <string.h>
#include "database.h"

Data::Data() {
    this->size_ = 0;
    this->list_ = nullptr;
}

Data::Data(char first_name[], char last_name[], float gpa) {
    this->size_ = 1;
    this->list_ = new (std::nothrow) Student;
    strcpy(this->list_[0].first_name, first_name);
    strcpy(this->list_[0].last_name, last_name);
    this->list_[0].gpa = gpa;
}

Data::~Data() {
    delete[] this->list_;
    this->list_ = nullptr;
}

bool Data::add_student() {
    Student *new_list;    
    new_list = new (std::nothrow) Student[this->size_ + 1];
    if (new_list == nullptr) {
        return false;
    } else {
        //copy the contents of the previous list into a new list
        for (int i = 0; i < this->size_; i++){
            new_list[i] = this->list_[i];
        }
        delete [] this->list_;
        //add new student
        std::cout << "Enter the student's first name: ";
        std::cin >> new_list[this->size_].first_name;
        std::cout << "Enter the student's last name: ";
        std::cin >> new_list[this->size_].last_name;
        std::cout << "Enter the student's GPA: ";
        std::cin >> new_list[this->size_].gpa;
        //increment size and provide new address for the list
        this->size_++;
        this->list_ = new_list;

        return true;
    }
}

void Data::list_students(){
    std::cout << std::endl 
    << "This is the current list of students:" 
    << std::endl << std::endl;
    
    for (int i = 0; i < this->size_; i++){
        std::cout << this->list_[i].first_name << " " 
        << this->list_[i].last_name << std::endl;
        std::cout << "current GPA: "<<  this->list_[i].gpa 
        << std::endl << std::endl;
    }
    std::cout << "There are currently " << this->size_ 
    << " students in our class" << std::endl;
    std::cout << "The database currently has " 
    << this->size_*sizeof(Student) + sizeof(Data) 
    << " bytes " << std::endl;
}
