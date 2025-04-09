#include <iostream>

int main(){
    int a, b;
    a = 6;
    b = 9;
    std::cout << "The value of a before swapping is " << a << std::endl;
    std::cout << "The value of b before swapping is " << b << std::endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    std::cout << "The value of a after swapping is " << a << std::endl;
    std::cout << "The value of b after swapping is " << b << std::endl;
    return 0 ;
}