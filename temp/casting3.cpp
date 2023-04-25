//dynamic_cast upcasting (common)
#include <iostream>

class Base {
  public:
    void display() const { std::cout << "Base\n"; } 
};
class Derived : public Base {
  public:
  void display() const { std::cout << "Derived\n"; }
};

int main( ) {
  Base* b;
  Derived* d = new Derived;

  //converting ptr to derived into ptr to base 
  b = dynamic_cast<Base*>(d); 
  if (b != nullptr)
    b->display();
  else
    std::cout << "Mismatch" << std::endl;
    d->display();
  delete d;
}