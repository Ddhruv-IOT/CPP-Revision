#include <iostream>
#include <string>
using namespace std;

void swapNumber(int &a, int &b) {
	// Write your code here.
	a = a + b;
    b = a - b;
    a = a - b;
}


int main()
{
    int a = 0, b = 0;
    cin >> a >> b;
    swapNumber(a, b);
    cout << a << " " << b;
    return 0;
}