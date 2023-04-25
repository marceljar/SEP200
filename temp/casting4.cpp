//dynamic_cast downcasting (rare)
#include <iostream>

class Base {
    public:
        virtual void display() const { std::cout << "Base\n"; } 
};
class Derived : public Base {
    public:
        void display() const { std::cout << "Derived\n"; } 
};

int main( ) {
    Base* b1 = new Base;
    Base* b2 = new Derived;
    Derived* d1 = dynamic_cast<Derived*>(b1); //fails (incomplete)
    Derived* d2 = dynamic_cast<Derived*>(b2); //succeeds

    if (d1 != nullptr)
        d1->display();
    else
        std::cout << "d1 is not derived" << std::endl;

    if (d2 != nullptr)
        d2->display();
    else
        std::cout << "d2 is not derived" << std::endl;

    delete b1;
    delete d2;
}