#include <iostream>
using namespace std;

int main() {

    int a = 9;
    int* p = &a; // * just after int is also valid
    int *q = &a; // * just before q is also valid
    int * z = &a; // This is also valid
    int*k = &a; // This is also valid
    cout << p << " " << q << " " << z << " " << k << "\n\n";

    // Double pointers
    int i = 10;
    int *ptr = &i;
    int **ptr_ptr = &ptr;

    cout << i << " " << &i << "\n";
    cout << *ptr << " " << ptr << " " << &ptr << "\n";
    cout << **ptr_ptr << " " << ptr_ptr << " " << &ptr_ptr << "\n";
    cout << &ptr_ptr << "->" << &ptr << "->" << &i << "\n\n";

    // question 1
    int first = 8;
    int second = 10;
    int *ptr3 = &second;
    *ptr3 = 9;
    cout << first << " " << second << "\n\n";

    // question 2
    int first1 = 6;
    int *p2 = &first1;
    int *q2 = p2;
    (*q2)++;
    cout << first1 << " " << *p2 << " " << *q2 << "\n\n";

    // question 3
    int first2 = 8;
    int *p3 = &first2;
    cout << (*p3)++ << " " ;
    cout << first2 << " " << "\n\n";

    // question 4
    int *p5 = 0;
    int first5 = 110;
    // *p5 = first5; // This will give a segmentation fault
    // cout << *p5 << "\n\n"; // gives segmentation fault



}