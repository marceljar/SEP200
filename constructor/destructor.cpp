//application that showcases destructors
#include <iostream>
#include <string.h> //defines strcpy
// uncomment to allow strcpy to work on Visual Studio
//#pragma warning(disable:4996)

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
    std::cout << "First name: " <<std::endl;
    std::cin >> first_name_;
    std::cout << "Last name: " <<std::endl;
    std::cin >> last_name_;
    std::cout << "gpa: " <<std::endl;
    std::cin >> gpa_;
}

void Student::display(){
    std::cout << "-----------------" << std::endl;
    std::cout << "Name: " << 
        first_name_ << " " << last_name_ << std::endl;
    std::cout << "gpa: " << gpa_ << std::endl;
}

int main() {
    
    Student student1;
    
    student1.display(); 
    student1.edit();
    student1.display();
    
    return 0;
}