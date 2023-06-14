#include <iostream>
#include <fstream>

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
    void save_list(char []);
    void retrieve_list(char []);
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

void List::save_list(char file_name[]) {
    std::ofstream write_file;
    write_file.open(file_name, std::ios::out);
    if (write_file.is_open()) {
        write_file << size_ << std::endl;
        //wrong! Simply saves a memory address
        //write_file << numbers_ << std::endl;
        //right! Serializes the data
        for (int i = 0; i < size_; i++) {
            write_file << numbers_[i] << std::endl;
        }
        std::cout << "File written!" << std::endl;
    }
    else {
        std::cout << "Could not open file" << std::endl;
    }
    write_file.close();
}

void List::retrieve_list(char file_name[]) {
    std::ifstream read_file;
    read_file.open(file_name, std::ios::in);
    if (read_file.is_open()) {
        read_file >> size_;
        numbers_ = new float[size_];
        for (int i = 0; i < size_; i++) {
            read_file >> numbers_[i];
        }
    }
    else {
        std::cout << "Could not open file" << std::endl;
    }
    read_file.close();
}

int main() {
    float fixed_list[3] = { 3.5, 2.73, 1.6 };
    List list1(fixed_list, 3), list2;
    char file_name[9] = { "list.txt" };

    list1.save_list(file_name);

    list2.retrieve_list(file_name);
    list2.display();

    return 0;
}
