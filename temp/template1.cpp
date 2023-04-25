#include <iostream>

template <typename T>
T max(T a, T b){
    return (a > b) ? a : b;
}

int main(){
    int ia = 3, ib = 5;
    float fa = 3.9, fb = 1.9;
    double da = 12.87, db = 32.43;

    std::cout << "max of " << ia << " and " << ib << " is " << max(ia, ib) << std::endl;
    std::cout << "max of " << fa << " and " << fb << " is " << max(fa, fb) << std::endl;
    std::cout << "max of " << da << " and " << db << " is " << max(da, db) << std::endl;

    return 0;
}