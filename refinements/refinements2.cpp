#include <iostream>

namespace foo {
    void func() {
        std::cout << "Hi from foo!" << std::endl;
    }
}

namespace bar {
    void func() {
        std::cout << "Hi from bar!" << std::endl;
    }
}

namespace classy {
    class my_class{
        public:
            void func();
    };
    // defining the method inside the namespace
    void my_class::func() {
        std::cout << "Hi from classy!" << std::endl;
    }
}

// defining the method outside the namespace
// void classy::my_class::func() {
//     std::cout << "Hi from classy!" << std::endl;
// }

int main() {

    foo::func();
    bar::func();

    classy::my_class Object;
    Object.func();

    return 0;
}