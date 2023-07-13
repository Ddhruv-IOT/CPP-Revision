#include <iostream>
using namespace std;

int main()
{
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

    // The value of *ptr is the value of num also known as dereferencing
    std::cout << "The value of *ptr is: " << *ptr << "\n";

    /*
    In C++, when you print the value of a pointer using the dereference operator (*), it displays the value stored at the memory address pointed to by the pointer.
    However, when the pointer type is char*, it is treated as a C-style string and interpreted differently.
    In your example, when you declare a char variable z and create a pointer wer pointing to z using char *wer = &z, the variable z holds the character 'A'. When you print *wer, it displays the character itself ('A')
    because char* pointers are interpreted as null-terminated strings in C++. In this case, the pointer is assumed to be pointing to the first character of a string, and dereferencing it gives you the character value at that memory address.
    To print the memory address itself, you can use the address-of operator (&). For example, std::cout << &z; will print the memory address of z rather than the character value.
    It's important to note that the behavior described above is specific to char* pointers and does not apply to other pointer types in C++.
    */

    char ch = 'A';
    char *ptr_ch = &ch;
    std::cout << "\n" << "The value of ch is: " << ch << "\n";
    std::cout << "The value of ptr_ch is: " << ptr_ch << "\n";
    std::cout << "The Address of ch is: " << &ch << "\n";
    std::cout << "The Address of ptr_ch is: " << &ptr_ch << "\n";

    return 0;
}