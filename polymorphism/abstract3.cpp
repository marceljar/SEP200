#include <iostream>

class Senecan{
    protected:
        char first_name_[16];
        char last_name_[16];
        int id_;
    public:
        //the virtual keyword allows for late binding
        virtual void set_info();
        virtual void display_info();
        //pure virtual function (makes this class abstract)
        virtual void greeting() = 0;
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
        void greeting();
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

void Student::greeting(){
    std::cout << "Hi, I am " << first_name_ << ". I am a student at Seneca." << std::endl;
}

class Faculty : public Senecan {
    private:
        char position_[16];
    public:
        void set_info();
        void display_info();
        void greeting();
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

void Faculty::greeting(){
    std::cout << "Hi, I am " << first_name_ << ". I am a " << position_ << " professor at Seneca." << std::endl;
}

int main(){

    Senecan **rooster;

    std::cout << "How many Senecans to enter? ";
    int num_senecans;
    std::cin >> num_senecans;
    rooster = new Senecan*[num_senecans];

    for (int i = 0; i < num_senecans; i++) {
        char type;
        std::cout << "Student (s) or Faculty (f)? ";
        std::cin >> type;
        if (type == 's') {
            Student *student;
            student = new Student;
            student->set_info();
            rooster[i] = student;
        } else {
            Faculty *faculty;
            faculty = new Faculty;
            faculty->set_info();
            rooster[i] = faculty;
        }
    }

    //Because of the virtual keyword, late binding calls 
    //the function for the derived class   
    for (int i = 0; i < num_senecans; i++) {
        rooster[i]->display_info();
    }
    for (int i = 0; i < num_senecans; i++) {
        rooster[i]->greeting();
    }

    //freeing up memory (important for functions)
    for (int i = 0; i < num_senecans; i++) {
        delete *(rooster + i);
    }
    delete [] rooster;

    return 0;
}