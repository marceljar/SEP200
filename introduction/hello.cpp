#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;
public:
    Person(std::string name, int age) {
        this->name = name;
        this->age = age;
    }
    void introduce() {
        std::cout << "Hi, my name is " << name
            << " and I am " << age << " years old." << std::endl;
    }
};

int main() {
    Person p("John", 30);
    p.introduce();
    return 0;
}
