#include <iostream>
using namespace std;

void print_ptr(int *p)
{
    cout << "The value of p is: " << *p << "\n";
}

void update_val(int *p)
{
    *p = *p + 1;
}

void print_addr(int *p)
{
    cout << "The address of p is: " << p << "\n";
}

void update_addr(int *p)
{
    cout << "Inside update_addr: \n";
    print_addr(p);
    p = p + 1; // This will not change the address of *p, the address of local p is changed
    print_addr(p);
}

// int sumArr(int arr[], int size) {
int sumArr(int *arr, int size)
{
    // we can use *arr or arr[], in both the cases, the address of first element is passed
    // technically, *arr is same as arr[]

    // Here, actually it will print the sie of pointer variable, not the array
    cout << "The Size: " << sizeof(arr) << "\n";

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int i = 5;
    int *ptr = &i;
    print_addr(ptr);
    print_ptr(ptr);
    update_val(ptr);
    print_ptr(ptr);
    update_addr(ptr);

    // pointers arrays and functions
    // when an array is passed to function, its passed by reference
    int arr[] = {10, 20, 30, 40};
    cout << sumArr(arr, 4);
    cout << sumArr(arr+2, 3); // passing the address of 3rd element, and size as 3, basically passing a part of array

}