//code showcasing function overloading
#include <iostream>

double sum(double num1, double num2);
int sum(int num1, int num2);
double sum(double num1, int num2);
double sum(int num1, double num2);

double sum(double num1, double num2){
    return num1 + num2;
}

int sum(int num1, int num2){
    return num1 + num2;
}

double sum(double num1, int num2){
    return num1 + num2;
}

double sum(int num1, double num2){
    return num1 + num2;
}

int main() {
    int int1 = 1, int2 = 2;
    double double1 = 2.5, double2 = 1.3;

    std::cout << sum(double1, double2) << std::endl;
    std::cout << sum(int1, int2) << std::endl;
    std::cout << sum(int1, double2) << std::endl;
    std::cout << sum(double1, int2) << std::endl;

    return 0;
}