#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40};

    std::cout << "The address of first memory block is: " << arr << "\n";
    std::cout << "The address of first memory block can also be given by: " << &arr << "\n";
    std::cout << "The address of first memory block can also be given by: " << &arr[0] << "\n";

    std::cout << "\n";
    std::cout << "The value at first memory block is: " << *arr << "\n";
    std::cout << "The value at first memebry block can also be given by: " << arr[0] << "\n";

    std::cout << "\n";
    std::cout << "We can access the second element using the address of first one: " << *(arr + 1) << "\n";
    // As array is contiguous in nature.

    // Chalaki++ (Smart C++)
    // arr[i] = *(arr + i) = *(i + arr) = i[arr]
    // so yes, i[arr] is technically valid C++ code, and it will work exactly the same as arr[i].

    std::cout << "i[arr] is same as arr[i] \n"
              << "arr[i]: " << arr[3] << "\n"
              << "i[arr]: " << 3 [arr];

    int arr2[] = {10, 30, 70};
    int *p = &arr2[0];
    std::cout << "\n\n";
    std::cout << "The address of first element: " << p << "\n";     // address of first element
    std::cout << "The value of first element: " << *p << "\n";      // value of first element
    std::cout << "The address of pointer variable: " << &p << "\n"; // address of pointer variable


    int arr3[] = {10, 20, 30, 40, 50};
    // &arr3 = &arr3 + 1; // This is not allowed
    // The above will give an error as the address of an array is constant and cannot be changed. The address is mapped in Symbol Table.
}