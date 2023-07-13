#include <iostream>
using namespace std;

int main() {
    std::cout << "Hello World!\n";
    std::cout << "This is a basic program to understand pointers in C++.\n";

    int num = 10;
    std::cout << "The value of num is: " << num << "\n";

    // Address of operator (&)
    // The adress is given in Hexadecimal format
    std::cout << "The address of num is: " << &num << "\n";

    // Pointer variable
    int *ptr = &num;
    
    // The value of ptr is the address of num
    std::cout << "The value of ptr is: " << ptr << "\n";

    return 0;
}