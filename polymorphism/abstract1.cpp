#include <iostream>

class Senecan{
    private:
        char first_name_[16];
        char last_name_[16];
        int id_;
    public:
        //the virtual keyword allows for late binding
        virtual void set_info();
        virtual void display_info();
};

void Senecan::set_info(){
    std::cout << "Enter name: ";
    std::cin >> first_name_ >> last_name_;
    std::cout << "Enter id: ";
    std::cin >> id_;
}

void Senecan::display_info(){
    std::cout << "Name: " << first_name_ 
              << " " << last_name_ <<std::endl;
    std::cout << "ID: " << id_ << std::endl;;
}

class Student : public Senecan {
    private:
        float gpa_;
    public:
        void set_info();
        void display_info();
};

void Student::set_info(){
    Senecan::set_info();
    std::cout << "Enter gpa: ";
    std::cin >> gpa_;     
}

void Student::display_info(){
    this->Senecan::display_info();
    std::cout << "gpa: " << gpa_ << std::endl;
}

class Faculty : public Senecan {
    private:
        char position_[16];
    public:
        void set_info();
        void display_info();
};

void Faculty::set_info(){
    Senecan::set_info();
    std::cout << "Enter position: ";
    std::cin >> position_;     
}

void Faculty::display_info(){
    this->Senecan::display_info();
    std::cout << "Position: " << position_ << std::endl;
}

int main(){

    Senecan *rooster[3];

    Student john;
    Student kevin;
    Faculty michael;

    //note that no type conversion is required! 
    //type checking is relaxed in such cases
    rooster[0] = &john;
    rooster[1] = &kevin;
    rooster[2] = &michael;

    //Because of the virtual keyword, late binding calls 
    //the function for the derived class
    for (int i = 0; i < 3; i++) {
        rooster[i]->set_info();
    }
    
    for (int i = 0; i < 3; i++) {
        rooster[i]->display_info();
    }

    return 0;
}