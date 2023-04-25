//Basic example of derived class
#include <iostream>

class Senecan{
    private:
        char first_name_[16];
        char last_name_[16];
        int id_;
    public:
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

void Senecan::display_info(){
    std::cout << "Name: " << first_name_ 
              << " " << last_name_ <<std::endl;
    std::cout << "ID: " << id_ << std::endl;;
}

class Student : public Senecan{
};

int main(){

    Senecan john;
    Student kevin;

    john.set_info();
    kevin.set_info();

    john.display_info();
    kevin.display_info();

    return 0;
}