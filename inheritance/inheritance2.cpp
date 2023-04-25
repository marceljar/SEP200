//This source code demonstrate how constructors and
//destructors are called from derived classes
#include <iostream>

class Senecan{
    private:
        char first_name_[16];
        char last_name_[16];
        int id_;
    public:
        Senecan();
        ~Senecan();
        void display_info();
};

Senecan::Senecan(){
    std::cout << "Enter first name: ";
    std::cin >> first_name_;
    std::cout << "Enter last name: ";
    std::cin >> last_name_;
    std::cout << "Enter id: ";
    std::cin >> id_;
}

Senecan::~Senecan(){
    std::cout << "bye base class!" << std::endl;
}

void Senecan::display_info(){
    std::cout << "Name: " << first_name_ << " " << last_name_ <<std::endl;
    std::cout << "ID: " << id_ << std::endl;;
}

class Student : public Senecan{
    private:
        float gpa_;
    public:
        Student();
        ~Student();
        void display_info();
};

Student::Student(){
    std::cout << "Enter gpa: ";
    std::cin >> gpa_;    
}

void Student::display_info(){
    //calling function from the base class Senecan
    Senecan::display_info();
    //adding more functionality
    std::cout << "gpa: " << gpa_ << std::endl;
}

Student::~Student(){
    std::cout << "bye derived class" << std::endl;
}

int main(){

    Senecan john;
    Student kevin;

    john.display_info();
    kevin.display_info();

    return 0;
}