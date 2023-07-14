#include <iostream>
using namespace std;

int main()
{
    float f = 10.5;
    float p = 2.5;
    float *ptr = &f;

    (*ptr)++; // the brackets are necessary otherwise it will increment the address
    *ptr = p;

    std:cout << *ptr << " " << f << " " << p << "\n";

    int a = 7;
    int b = 17;
    int *c = &b;
    *c = 7;
    std::cout << a << " " << b << "\n";

    int *ptr1 = 0;
    int a1 = 10;
    // *ptr1 = a1; // will give segmentation fault Error
    // std::cout << *ptr1 << "\n";

    int b1 = 10;
    cout << "Addess of b1 is: " << &b1 << "\n";
    int *a2 = &b1;
    cout << "Address of b1 is: " << a2 << "\n";

    char ch = 'a';
    char* ptr_ch = &ch;
    ch++;
    cout << *ptr_ch << "\n";
}