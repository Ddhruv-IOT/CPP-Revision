#include <iostream>
using namespace std;

// A function to increment by 1 through pass by reference
void update(int &a) {
    a++;
}

// A function to increment by 1 through pass by value with return type as a reference variable
// here space between int & and function name is not necessary
// int& function name is same as int &function name and even int&function name, also int & function name
int& update2(int &a) {
    a++;
    return a;
}

int& update3(int x) {
    x++;
    return x; // here we are returning a local variable as a reference variable
    // but as soon as the function ends, the local variable is destroyed, so what will be the refrerence variable pointing to? Babaji ka thullu 
}

// int* update4(int x) {
//     int *ptr = &x;
//     return ptr; // here we are returning a local variable as a reference variable
//     // but as soon as the function ends, the local variable is destroyed, so what will be the refrerence variable pointing to? Babaji ka thullu 
// }

int main() {
    int a = 10;

    // created a reference variable b to a  
    int &b = a;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "&a = " << &a << endl;
    cout << "&b = " << &b << endl;

    cout << a++ << " " << a << " " << b << endl;
    cout << b++ << " " << b << " " << a << endl;

    int c = 5;
    cout << "Value of c Before update: " << c << endl;
    update(c);
    cout << "Value of c After update: " << c << endl;

    int d = 2;
    cout << "Value of d Before update: " << d << endl;
    cout << "Value of d After update: " << update2(d) << endl;

    // cout << "Value of d Before update: " << d << endl;
    // cout << "Value of d After update: " << update4(d) << endl; // this will give error as we are returning a local variable as a reference variable
}