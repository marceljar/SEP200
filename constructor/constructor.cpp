//application that showcases constructors
#include <iostream>

class Student{
    private:
        char first_name_[16];
        char last_name_[16];
        float gpa_;
    public:
        Student(){
            edit();
        }
        void edit() {
            std::cout << "First name: " <<std::endl;
            std::cin >> first_name_;
            std::cout << "Last name: " <<std::endl;
            std::cin >> last_name_;
            std::cout << "gpa: " <<std::endl;
            std::cin >> gpa_;
        }
        void display(){
            std::cout << "-----------------" << std::endl;
            std::cout << "Name: " << 
              first_name_ << " " << last_name_ << std::endl;
            std::cout << "gpa: " << gpa_ << std::endl;
        }
};
int main() {
    
    Student student1, student2;
    
    student1.display();
    student2.display();
    
    student1.edit();
    student1.display();
    
    return 0;
}