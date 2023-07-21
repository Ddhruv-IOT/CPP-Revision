#include <iostream>
using namespace std;

int main() {

    int a = 9;
    int* p = &a; // * just after int is also valid
    int *q = &a; // * just before q is also valid
    int * z = &a; // This is also valid
    int*k = &a; // This is also valid
    cout << p << " " << q << " " << z << " " << k << "\n\n";


}