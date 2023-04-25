//application that showcases destructors
#include <iostream>
#include <string.h>

class Student{
    private:
        char first_name_[16];
        char last_name_[16];
        float gpa_;
    public:
        Student();
        ~Student();
        void edit();
        void display();       
};

Student::Student(){
    this->edit();
}

Student::~Student(){
    char first_name[16] = {""};
    char last_name[16] = {""};
    strcpy(first_name_, first_name);
    strcpy(last_name_, last_name);
    gpa_ = 0;
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
    
    Student student1;
    
    student1.display(); 
    student1.edit();
    student1.display();
    
    return 0;
}