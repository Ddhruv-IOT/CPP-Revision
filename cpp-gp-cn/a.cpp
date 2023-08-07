#include<iostream>
#include<string>
using namespace std;

int main(){
    int x = 5;
    char y = 'A';
    y = x + y;
    cout << y; 

    double a = 10.25;
    int b = int(a)/2;
    cout << b;

    // istream& getline(istream& is, char* str, int n, char delim = '\n');
    // string::getline();

    string kx;
    // getline(cin, kx);
    cin >> kx;
    cout << kx;
    return 0;

    // cin stops reading input when it encounters a whitespace character (space, newline, tab, etc.).
}