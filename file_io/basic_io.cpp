#include <iostream>
#include <fstream>

int main() {

    std::ofstream write_file;
    write_file.open("test.txt", std::ios::out);
    if (write_file.is_open()) {
        write_file << "Add a line of text to file" << std::endl;
        write_file << "Second line of text to file" << std::endl;
        std::cout << "File written!" << std::endl;
    }
    else {
        std::cout << "Could not open file" << std::endl;
    }
    write_file.close();

    std::ifstream read_file;
    read_file.open("test.txt", std::ios::in);
    if (read_file.is_open()) {
        char aux[128];
        //read one word from the file
        read_file >> aux;
        std::cout << aux << std::endl;
        //read whole file word by word
        while(read_file >> aux){
            std::cout << aux << std::endl;            
        }
    }
    else {
        std::cout << "Could not open file" << std::endl;
    }
    read_file.close();

    return 0;
}
