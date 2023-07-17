# include <iostream>
using namespace std;

int main() {
    int a[5];
    int *c;
    cout << sizeof(a) << "\n" << sizeof(c) << "\n\n";

    int b[] = {1, 2, 3, 4};
    cout << *(b) << "\n" << *(b+1) << "\n\n";

    int d[3] = {1, 2, 3};
    cout << *(d + 2) << "\n\n";

    int arr[] = {1, 2, 3, 4};
    // int *p = arr++; // error, not allowed due to symbol table
    // cout << *p << "\n\n";

    int arr2[] = {4, 5, 6, 7};
    int *p = (arr2 + 1);
    cout << *arr2 + 9 <<"\n\n";

    char b2[] = "xyz";
    char *c2 = &b2[0];
    cout << c2 << "\n\n";
}