#include <iostream>
#include <fstream>
#include <string.h>

int main(){
    std::ofstream write_file;
    write_file.open("test_var.txt", std::ios::out);
    int i = 45, j = 10;
    float pi = 3.14;
    if (write_file.is_open()){
        write_file << i << " "<< j << std::endl;
        write_file << pi << std::endl;
        std::cout << "File written!" << std::endl;
    } else {
        std::cout << "Could not open file"  << std::endl;
    }    
    write_file.close();

    std::ifstream read_file;
    read_file.open("test_var.txt", std::ios::in);
    if (read_file.is_open()){
        int aux_int;
        float aux_float;
        std::string aux;
        //read as a string and convert
        read_file >> aux;
        aux_int = std::stoi(aux);
        std::cout << aux_int << std::endl;
        //read as an int
        read_file >> aux_int;
        std::cout << aux_int << std::endl;
        //read as a float
        read_file >> aux_float;
        std::cout << aux_float << std::endl;
    } else {
        std::cout << "Could not open file"  << std::endl;
    }    
    read_file.close();

    return 0;
}
