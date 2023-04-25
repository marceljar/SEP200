#include <iostream>

template <class Type>
class Stack {
    private:
        Type sequence[100];
        int index;
    public:
        Stack() { index = 0; } //declaration and definition
        void push(Type);
        Type pop();
};

template <class Type>
void Stack<Type>::push(Type var){
    sequence[index++] = var;  
}

template <class Type>
Type Stack<Type>::pop(){
    return sequence[--index];  
}

int main() {

    Stack<float> stack;
    stack.push(23.5);
    stack.push(12.2);
    stack.push(1.0);
    
    std::cout << "1: " << stack.pop() << std::endl;
    std::cout << "2: " << stack.pop() << std::endl;
    std::cout << "3: " << stack.pop() << std::endl;

    return 0;
}