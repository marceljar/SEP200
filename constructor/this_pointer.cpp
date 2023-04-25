//application that showcases constructors
#include <iostream>
#include <string.h>
//to allow for strcpy to work
#pragma warning(disable:4996)

class Student{
    private:
        char first_name[16];
        char last_name[16];
        float gpa;
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
    strcpy(this->first_name, first_name);
    strcpy(this->last_name, last_name);    
    this->gpa = gpa;
}

void Student::edit(){
    std::cout << "Enter the student's first name: " <<std::endl;
    std::cin >> this->first_name;
    std::cout << "Enter the student's last name: " <<std::endl;
    std::cin >> this->last_name;
    std::cout << "Enter the student's gpa: " <<std::endl;
    std::cin >> this->gpa;
}

void Student::display(){
    std::cout << "-------------------------" << std::endl;
    std::cout << "Student's name: " << 
        this->first_name << " " << this->last_name << std::endl;
    std::cout << "Student's gpa: " << this->gpa << std::endl;
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