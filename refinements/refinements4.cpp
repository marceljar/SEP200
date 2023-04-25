#include <iostream>

class Counter{
    private:
        static int num;
    public:
        Counter();
        void display();
};

//value msut be defined outside class
int Counter::num = 0;

Counter::Counter(){
    num++;
}

void Counter::display(){
    std::cout << num << " objects." <<std::endl;
}

int main() {

    Counter obj1;
    obj1.display();
    Counter obj2;
    obj2.display();
    Counter obj3;
    obj3.display();

    return 0;
}