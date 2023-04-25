#include <iostream>
#include <cstring>

class Base {
    //note that private is the default access
        int number_;
    public:
        Base();
        Base(int);
        void display() const;
};

class Derived : public Base {
    char name_[16];
    public:
        Derived();
        Derived(const char *, int);
        void display() const;
};

Base::Base() {
    number_ = 0;
}

Base::Base(int number) {
    number_ = number;
}

void Base::display() const{
    std::cout << "Number: " << number_ << std::endl;
}
Derived::Derived(){
    strncpy(name_,"                ",16);
}

//specifies which base constructor to call
Derived::Derived(const char * char_array, int i) : Base (i){
    strncpy(name_,char_array,16);
}

void Derived::display() const{
    std::cout << "Name: " << name_ << std::endl;
    Base::display();
}

int main() {
    char name[16] = "Kevin";
    Derived john, kevin(name, 13);

    kevin.display();
    john.display();

    return 0;
}