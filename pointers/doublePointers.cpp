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

    // question 5
    int first6 = 8;
    int second6 = 11;
    int *third = &second6;
    first6 = *third;
    *third += 2;
    cout << first6 << " " << second6 << "\n\n";

    //question 6
    float f = 12.5;
    float pf = 21.5;
    float *ptrf = &f;
    (*ptrf)++;
    *ptrf = pf;
    cout << f << " " << pf << " " << *ptrf << "\n\n";

    // question 7
    int arr[5];
    int *p7;
    cout << sizeof(arr) << " " << sizeof(p7) << "\n\n";

    // question 8
    int arr2[] = {1, 2, 3, 4};
    cout << *(arr2) << " " << *(arr2 + 1) << "\n\n";

    // question 9
    int arr3[] = {10, 20, 30};
    cout << arr3 << " " << &arr3 << "\n\n";

    // question 10
    int arr4[6] = {10, 20, 30};
    cout << (arr4 + 1) << " " << "\n\n"; //prints the address of the second element

    // question 11
    int arr5[6] = {11, 12, 31, 14, 15};
    cout << arr << " " << &arr << endl; //prints the address of the first element

    // question 12
    cout << (arr + 1) << "  " << &arr[1] << " " << &1[arr] << "\n\n"; //prints the address of the second element

    // question 13
    int *px = arr5;
    cout << px[2] << endl; //prints the third element

    // question 14
    cout << *arr5 << " " << *(arr5 + 3) << endl;

    // question 15
    // int *px2 = arr5++; // arr cant be updated as it in symbol table
    // cout << *px2 << endl;

    // question 16
    char ch = 'a';
    char *ptr_ch = &ch;
    ch++;
    cout << ch << " " << *ptr_ch << endl;


}