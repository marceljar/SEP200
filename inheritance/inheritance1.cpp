//Basic example of derived class with shadowing
#include <iostream>

class Senecan{
    private:
        char first_name_[16];
        char last_name_[16];
        int id_;
    public:
        int get_id();
        void set_info();
        void display_info();
};

void Senecan::set_info(){
    std::cout << "Enter first name: ";
    std::cin >> first_name_;
    std::cout << "Enter last name: ";
    std::cin >> last_name_;
    std::cout << "Enter id: ";
    std::cin >> id_;
}

int Senecan::get_id(){
    return id_;
}

void Senecan::display_info(){
    std::cout << "Name: " << first_name_ 
              << " " << last_name_ <<std::endl;
    std::cout << "ID: " << id_ << std::endl;;
}


class Student : public Senecan{
    private:
        float gpa_;
    public:
        //shadowing functions from base class
        void set_info();
        void display_info();
        //new method
        float get_gpa();
};

void Student::set_info(){
    //calling function from base class
    Senecan::set_info();
    //adding more functionality
    std::cout << "Enter gpa: ";
    std::cin >> gpa_;     
}

void Student::display_info(){
    this->Senecan::display_info();
    std::cout << "gpa: " << gpa_ << std::endl;
}
float Student::get_gpa(){
    return gpa_;
}

int main(){

    Senecan john;
    Student kevin;

    john.set_info();
    kevin.set_info();

    john.display_info();
    kevin. display_info();

    std::cout << "ID: " << john.get_id() << std::endl;
    std::cout << "ID: " << kevin.get_id() << "GPA: " 
              << kevin.get_gpa() << std::endl;

    return 0;
}