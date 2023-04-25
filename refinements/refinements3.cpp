#include <iostream>

class numbers{
    private:
        int size_;
        float *numbers_;
    public:
        //default constructor
        numbers();
        //overloaded constructor
        numbers(const float *, int);
        //copy constructor
        numbers(const numbers&);
        void display();
};

numbers::numbers(){
    std::cout << "Default construcor" << std::endl;
    size_ = 0;
    numbers_ = nullptr;
}

numbers::numbers(const float * array, int size){
    std::cout << "Overloaded construcor" << std::endl;
    size_ = size;
    numbers_ = new float[size];
    for (int i = 0; i < size; i++){
        numbers_[i] = array[i];
    }
}

numbers::numbers(const numbers& source_number){
    std::cout << "Copy constructor" << std::endl;
    size_ = source_number.size_;
    numbers_ = new float[size_];
    for (int i = 0; i < size_; i++){
        numbers_[i] = source_number.numbers_[i];
    }
}

void numbers::display(){
    for (int i = 0; i < size_; i++){
        std::cout << numbers_[i] << ", ";
    }
    std::cout << std::endl;
}


int main() {

    float num[4] = {1.5, 2.0, 3.2, 5.8};
    int size = 4;

    numbers obj1, obj2(num,size), obj3(obj2); // obj3 = obj2

    obj1.display();
    obj2.display();
    obj3.display();

    return 0;
}