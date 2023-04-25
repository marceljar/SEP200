//code showcasing operator overloading
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
        Complex operator-(Complex number); 
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

//overloading the - operator
Complex Complex::operator-(Complex number){
    Complex aux;
    //"this" corresponds to the left operand
    //in other words, A in an A + B expression
    aux.real_ = this->real_ - number.real_;
    aux.imag_ =  this->imag_ - number.imag_;
    return aux;
}

int main() {
    Complex num1(3,2), num2(2,1), num3, num4;

    num1.display();
    num2.display();

    num3 = num1 + num2;
    num3.display();

    num3 = num1 - num2;
    num3.display();

    return 0;
}