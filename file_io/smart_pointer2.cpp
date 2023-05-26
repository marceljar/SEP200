#include <iostream>
#include <memory>

void create_array(int size) {
    std::shared_ptr<int[]> array(new int[size]);

    for (int i = 0; i < size; i++) {
        array[i] = i;
    }

    std::shared_ptr<int[]> new_array = array;

    std::cout << "created " << array.use_count()<< " arrays of size: " << size << std::endl;
}


int main(){
    
    create_array(5);
    return 0;
}
