#include <iostream>
using namespace std;

// A function to increment by 1 through pass by refrence

void update(int &a) {
    a++;
}

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
}