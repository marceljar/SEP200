//application that showcases constructors
#include <iostream>
#include <string.h>
//to allow for strcpy to work
//#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

class Student{
    private:
        char first_name_[16];
        char last_name_[16];
        float gpa_;
    public:
        Student();
        Student(char[], char[], float);
        void edit();
        void display();       
};

Student::Student(){
    this->edit();
}

Student::Student(char first_name[], char last_name[], float gpa){
    strcpy(first_name_, first_name);
    strcpy(last_name_, last_name);    
    gpa_ = gpa;
}

void Student::edit(){
    std::cout << "Enter the student's first name: " <<std::endl;
    std::cin >> first_name_;
    std::cout << "Enter the student's last name: " <<std::endl;
    std::cin >> last_name_;
    std::cout << "Enter the student's gpa: " <<std::endl;
    std::cin >> gpa_;
}

void Student::display(){
    std::cout << "-------------------------" << std::endl;
    std::cout << "Student's name: " << 
        first_name_ << " " << last_name_ << std::endl;
    std::cout << "Student's gpa: " << gpa_ << std::endl;
}

int main() {
    
    char first_name[16] = {"john"};
    char last_name[16] = {"smith"};

    Student student1(first_name, last_name, 3.5), student2;
    
    student1.display();
    student2.display();
    
    student1.edit();
    student1.display();
    
    return 0;
}