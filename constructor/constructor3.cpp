//application that showcases copy constructors
#include <iostream>
#include <string.h> //defines strcpy
// uncomment to allow strcpy to work on Visual Studio
//#pragma warning(disable:4996)

class Student{
    private:
        char first_name_[16];
        char last_name_[16];        
    public:
        float gpa_;
        Student();
        Student(char[], char[], float);
        Student(const Student&);
        void edit();
        void display();       
};

Student::Student(){
    std::cout << "Used empty constructor!" <<std::endl;
    this->edit();
}

Student::Student(char first_name[], char last_name[], float gpa){
    std::cout << "Used overloaded constructor!" <<std::endl;
    strcpy(first_name_, first_name);
    strcpy(last_name_, last_name);    
    gpa_ = gpa;
}

Student::Student(const Student& student){
    std::cout << "Used copy constructor!" <<std::endl;
    strcpy(first_name_, student.first_name_);
    strcpy(last_name_, student.last_name_);    
    gpa_ = student.gpa_;
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

Student increase_gpa(Student student){
    student.gpa_ += 0.5;
    return student;
}

int main() {
    
    char first_name[16] = {"john"};
    char last_name[16] = {"smith"};

    Student student1, student2(first_name, last_name, 3.5),
            student3(student1);
    
    student1.display();
    student2.display();
    student3.display();

    student3 = increase_gpa(student3);
    student3.display();
    
    return 0;
}