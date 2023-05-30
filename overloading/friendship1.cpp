//code showcasing friendship for operator overlaoding
#include <iostream>

class Complex{
    private:
        float real_;
        float imag_;
    public:
        Complex();
        Complex(float real, float imag);
        friend void display(Complex);
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

void display(Complex number){
    std::cout << number.real_ << " + " 
              << number.imag_ << "i" << std::endl; 
}


int main() {
    Complex num1(2,3), num2(3,4);

    display(num1);
    display(num2);

    return 0;
}