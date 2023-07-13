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
    std::cout << "\n"
              << "The value of ch is: " << ch << "\n";
    std::cout << "The Address of ch is: " << &ch << "\n";
    // forcing the compiler to treat the address of ch as a void pointer
    std::cout << "The Address of ch is: " << static_cast<void *>(&ch) << "\n";
    std::cout << "The value of ptr_ch is: " << ptr_ch << "\n";
    std::cout << "The value of *ptr_ch is: " << *ptr_ch << "\n";

    float f = 10.5;
    float *ptr_f = &f;
    std::cout << "\n"
              << "The value of f is: " << f << "\n";
    std::cout << "The Address of f is: " << &f << "\n";
    std::cout << "The value of ptr_f is: " << ptr_f << "\n";
    std::cout << "The value of *ptr_f is: " << *ptr_f << "\n";

    // Pointer Increment and Decrement
    std::cout << "\n";

    int x = 10;
    int *new_ptr = &x;
    std::cout << "The value of x is: " << x << "\n";
    std::cout << "The value of x using new_ptr is: " << *new_ptr << "\n";
    x++;
    std::cout << "The value of updated x is: " << x << "\n";
    std::cout << "The value of updated x using new_ptr is: " << *new_ptr << "\n";

    std::cout << "Size of x is: " << sizeof(x) << "\n";
    std::cout << "Size of new_ptr is: " << sizeof(new_ptr) << "\n";

    // In majority of cases, size of pointer is 8 bytes (64 bits) in 64-bit system irrespective of data type like int, char, etc.

    // Null Pointer
    int *ptr_null = NULL;
    int *ptr_null_2 = 0;

    // std::cout << "/n" << *ptr_null_2 << "\n";
    // Printing the value of a null pointer will result in a segmentation fault

    // different ways to initialize a pointer
    int i = 5;
    int *q_ptr = &i;
    int *late_ptr = 0;
    late_ptr = &i;

    std::cout << "\n"
              << "The address contained in q_ptr and late_ptr is: " << q_ptr << " " << late_ptr << "\n";

    std::cout << "\n"
              << "The value of q_ptr and late_ptr is: " << *q_ptr << " " << *late_ptr << "\n";
    


    return 0;
}