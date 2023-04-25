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
        //using the const declaration
        void display_info() const;
        //overloading the insertion operator
        friend std::ostream& operator<<(std::ostream&, const Senecan&);
};

std::ostream& operator<<(std::ostream &out, const Senecan& senecan){
    out << senecan.first_name_ << " " << senecan.last_name_ << std::endl;
}

Senecan::Senecan(){
    std::cout << "Enter first name: ";
    std::cin >> first_name_;
    std::cout << "Enter last name: ";
    std::cin >> last_name_;
    std::cout << "Enter id: ";
    std::cin >> id_;
}

void Senecan::display_info() const{
    std::cout << "Name: " << first_name_ << " " << last_name_ <<std::endl;
    std::cout << "ID: " << id_ << std::endl;;
}

class Student : public Senecan{
    private:
        float gpa_;
    public:
        Student();
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

int main(){

    Senecan john;
    Student kevin;

    john.display_info();
    kevin.display_info();

    std::cout << john;
    std::cout << kevin;

    return 0;
}