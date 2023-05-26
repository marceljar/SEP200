#include <iostream>

class List {
private:
    int size_;
    float* numbers_;
public:
    List();
    List(float*, int);
    void display();
    bool new_list(float*, int);
    void edit_list(float, int);
    List& operator=(const List&);
};

List::List() {
    size_ = 0;
    numbers_ = nullptr;
}

List::List(float* numbers, int size) {
    numbers_ = new (std::nothrow) float[size];
    if (numbers_ == nullptr) {
        std::cout << "Could not allocate memory" << std::endl;
    }
    else {
        for (int i = 0; i < size; i++) {
            numbers_[i] = numbers[i];
        }
        size_ = size;
    }
}

bool List::new_list(float* numbers, int size) {
    numbers_ = new (std::nothrow) float[size];
    if (numbers_ == nullptr) {
        std::cout << "Could not allocate memory" << std::endl;
        return false;
    }
    else {
        for (int i = 0; i < size; i++) {
            numbers_[i] = numbers[i];
        }
        size_ = size;
        return true;
    }
}

void List::display() {
    for (int i = 0; i < size_ - 1; i++) {
        std::cout << numbers_[i] << ", ";
    }
    std::cout << numbers_[size_ - 1] << std::endl;
}

void List::edit_list(float number, int position) {
    numbers_[position] = number;
}


List& List::operator=(const List& list2) {
   this->numbers_ = new (std::nothrow) float[list2.size_];
   if (numbers_ == nullptr) {
       std::cout << "Could not allocate memory" << std::endl;
       this->numbers_ = nullptr;
       this->size_ = 0;
   }
   else {
       for (int i = 0; i < list2.size_; i++) {
           this->numbers_[i] = list2.numbers_[i];
       }
       this->size_ = list2.size_;
   }
   return *this;
}

int main() {

    float fixed_list[3] = { 3.0, 2.0, 1.0 };

    List list1(fixed_list, 3), list2;
    list1.display();

    list2 = list1;
    list2.display();
    list2.edit_list(4.0, 2);
    list2.display();
    list1.display();

    return 0;
}