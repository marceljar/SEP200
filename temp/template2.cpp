#include <iostream>

template <typename T1, typename T2>
double max(T1 a, T2 b){
    return (a > b) ? static_cast<double>(a) : static_cast<double>(b);
}

int main(){
    short int ia = 3, ib = 5;
    float fa = 3.9, fb = 1.9;
    double da = 12.87, db = 32.43;

    std::cout << "max of " << ia << " and " << ib << " is " << sizeof(max(ia, ib)) << std::endl;
    std::cout << "max of " << fa << " and " << fb << " is " << max(fa, fb) << std::endl;
    std::cout << "max of " << da << " and " << db << " is " << max(da, db) << std::endl;

    std::cout << "max of " << ia << " and " << db << " is " << sizeof(max(ia, fb)) << std::endl;
    std::cout << "max of " << fa << " and " << db << " is " << max(fa, db) << std::endl;
    
    return 0;
}