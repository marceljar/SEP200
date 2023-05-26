#include <iostream>
#include <memory>

void create_array(int size) {
    std::unique_ptr<int[]> array(new int[size]);

    for (int i = 0; i < size; i++) {
        array[i] = i;
    }
    std::cout << "created and array of size: " << size << std::endl;
}


int main(){
    
    create_array(5);
    return 0;
}
