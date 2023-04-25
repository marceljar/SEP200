//code showcasing friendship
#include <iostream>

class Complex{
    private:
       float real_;
       float imag_;
    public:
       Complex();
       Complex(float real, float imag);
       void display();
       Complex operator+(Complex number);
       friend Complex operator+(float number1, Complex number2);
       friend Complex operator+(Complex number1, float number2); 
};

Complex::Complex(){
    real_ = 0.0;
    imag_ = 0.0;
}

//overloading the constructor
Complex::Complex(float real, float imag){
    real_ = real;
    imag_ = imag;
}

void Complex::display(){
    std::cout << real_ << " + " << imag_ << "i" << std::endl; 
}

//overloading the + operator
Complex Complex::operator+(Complex number){
    Complex aux;
    //"this" corresponds to the left operand
    //in other words, A in an A + B expression
    aux.real_ = this->real_ + number.real_;
    aux.imag_ =  this->imag_ + number.imag_;
    return aux;
}

//not a member of the complex class, 
//but has access to private data
Complex operator+(float number1, Complex number2){
    Complex aux;
    aux.real_ = number1 + number2.real_;
    aux.imag_ = number2.imag_;
    return aux;
}

//not a member of the complex class, 
//but has access to private data
Complex operator+(Complex number1, float number2){
    //makes use of the previously overloaded operator
    return number2 + number1;
}

int main() {
    Complex num1(2,3), num2(3,4), num3;

    num1.display();
    num2.display();

    num3 = num1 + num2;
    num3.display();

    num3 = 3.5 + num2;
    num3.display();

    num3 = num1 + 4.0;
    num3.display();

    return 0;
}