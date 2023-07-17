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

    // Now, if create a pointer variable and assign the address of the array to it, then we can increment the pointer variable.
    // This is because the pointer variable is not constant and can be changed.
    int *ptr = arr3;
    ptr = ptr + 1; // This is allowed, incremwnt the address by 1 block

    std::cout << "\n"
              << "The new value: " << *ptr << "\n";

    // Character Arrays
    char carr[6] = "abcde";

    // The implementation for cout is different for char arrays.
    std::cout << "carr, will display the whole array, instead of the address of first element: " << carr << "\n";
    std::cout << "if we try to access the adrress using &carr[0], it will again print the whole: " << &carr[0] << "\n";
    std::cout << "if we try to access the adrress using &carr, it will print the address of first element: " << &carr << "\n";

    std::cout <<"It will print chars from given index till end or terminating Char: " << &carr[1] << "\n";
    std::cout << "Its same as dereferencing carr[0]: " << *(carr) << "\n";
    std::cout <<"Its same as dereferencing carr[1] : " << *(carr+1) << "\n";
    std::cout << "Its same as dereferencing carr[i] and adding some value to ASCII: "<<*(carr+1)+1 << "\n\n";

    // We know that char arrya terminates at null character, '\0'
    // Here, the address of temp is pointed by p6, and the value of temp is 'z'
    // when we print p6, it will print the value till it finds '\0'
    // its because, cout is implemented in such a way that it will print the value till it finds '\0'

    char temp = 'z';
    char *p6 = &temp;
    cout << "prints data till '\0' is found: "<< p6; // prints data till '\0' is found

    // Should be avoided
    // char *p7 = "abcde";
    // cout << "\n"
    //      << p7; // prints data till '\0' is found

    return 0;
}