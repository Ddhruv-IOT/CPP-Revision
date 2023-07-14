#include <iostream>
using namespace std;

int main()
{
    int a = 7;
    int *c = &a;
    c = c + 1; // increments the address by 4 bytes
    std::cout << a << " " << *c << endl;

    int a1 = 7;
    int *c1 = &a1;
    c1 = c1 + 3; // increments the address by 8 bytes
    std::cout << c1 << endl;

    double a2 = 10.54;
    double *d = &a2;
    std::cout << d << "\n";

    d = d + 1;
    std::cout << d << "\n";
}