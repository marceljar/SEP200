#include <iostream>

class List {
private:
    int num_numbers_;
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
    num_numbers_ = 0;
    numbers_ = nullptr;
}

List::List(float* numbers, int num_numbers) {
    numbers_ = new (std::nothrow) float[num_numbers];
    if (numbers_ == nullptr) {
        std::cout << "Could not allocate memory" << std::endl;
    }
    else {
        for (int i = 0; i < num_numbers; i++) {
            numbers_[i] = numbers[i];
        }
        num_numbers_ = num_numbers;
    }
}

bool List::new_list(float* numbers, int num_numbers) {
    numbers_ = new (std::nothrow) float[num_numbers];
    if (numbers_ == nullptr) {
        std::cout << "Could not allocate memory" << std::endl;
        return false;
    }
    else {
        for (int i = 0; i < num_numbers; i++) {
            numbers_[i] = numbers[i];
        }
        num_numbers_ = num_numbers;
        return true;
    }
}

void List::display() {
    for (int i = 0; i < num_numbers_ - 1; i++) {
        std::cout << numbers_[i] << ", ";
    }
    std::cout << numbers_[num_numbers_ - 1] << std::endl;
}

void List::edit_list(float number, int position) {
    numbers_[position] = number;
}


List& List::operator=(const List& list2) {
   this->numbers_ = new (std::nothrow) float[list2.num_numbers_];
   if (numbers_ == nullptr) {
       std::cout << "Could not allocate memory" << std::endl;
       this->numbers_ = nullptr;
       this->num_numbers_ = 0;
   }
   else {
       for (int i = 0; i < list2.num_numbers_; i++) {
           this->numbers_[i] = list2.numbers_[i];
       }
       this->num_numbers_ = list2.num_numbers_;
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