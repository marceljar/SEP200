//code showcasing composition
#include <iostream>
#include <string>

class Name {
private:
    std::string first_name_;
    std::string last_name_;
public:
    Name(std::string, std::string);
    ~Name();
    friend class Person;
};

Name::Name(std::string first_name, std::string last_name) {
    std::cout << "Calling Constructor for Name!" << std::endl;
    this->first_name_ = first_name;
    this->last_name_ = last_name;
}

Name::~Name() {
    std::cout << "Calling Destructor for Name!" << std::endl;
}

class Person {
private:
    Name name_;
    std::string dob_;
    std::string birth_gender_;
public:
    Person(std::string, std::string, std::string, std::string);
    ~Person();
    void display();
};

Person::Person(std::string first_name, std::string last_name, 
        std::string dob, std::string birth_gender) 
        : name_(first_name, last_name) { //constructor delegation
    std::cout << "Calling Constructor for Person!" << std::endl;
    dob_ = dob;
    birth_gender_ = birth_gender;
}

Person::~Person() {
    std::cout << "Calling Destructor for Person!" << std::endl;
}


void Person::display() {
    std::cout << "----------------------------" << std::endl;
    std::cout << "Person Data: " << std::endl;
    std::cout << "Name: " << name_.first_name_ << " " 
              << name_.last_name_<< std::endl;
    std::cout << "Birth gender: " << birth_gender_ << std::endl;
    std::cout << "Date of birth: " << dob_ << std::endl;
    std::cout << "----------------------------" << std::endl;
}

int main()
{
    Person someone("John", "Doe", "male", "01/01/1985");

    someone.display();

    return 0;
}