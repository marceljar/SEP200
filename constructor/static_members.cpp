//application that showcases static member variables
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
        static int num_students_;
        Student();
        ~Student();
        void edit();
        void display();       
};

Student::Student(){
    num_students_++;
    this->edit();
}

Student::~Student(){
    char first_name[16] = {""};
    char last_name[16] = {""};
    strcpy(first_name_, first_name);
    strcpy(last_name_, last_name);
    gpa_ = 0;
    num_students_--;
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

int Student::num_students_ = 0;

int main() {
    
    Student student1, student2;
    
    student1.display(); 
    student1.display(); 

    std::cout << "There are " << student1.num_students_ 
       << " students in the system." << std::endl;
    
    return 0;
}