//application showcasing the advantages of privacy
#include <iostream>

class Student{
    private:
        char first_name_[16];
        char last_name_[16];
        float gpa_;
    public:
        void edit();
        void display();
};

void Student::edit(){
    std::cout << "Enter the student's first name: " <<std::endl;
    std::cin >> first_name_;
    std::cout << "Enter the student's last name: " <<std::endl;
    std::cin >> last_name_;
    std::cout << "Enter the student's GPA: " <<std::endl;
    std::cin >> gpa_;
    
}

void Student::display(){
    std::cout << "-------------------------" << std::endl;
    std::cout << "Student's name: " << 
        first_name_ << " " << last_name_ << std::endl;
    std::cout << "Student's gpa: " << gpa_ << std::endl;
}

int main() {
    
    Student john_doe;

    john_doe.edit();
    john_doe.display();

    john_doe.gpa = 3.6; //error
    
    return 0;
}
