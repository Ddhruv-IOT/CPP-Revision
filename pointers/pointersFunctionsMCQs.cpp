#include <iostream>
using namespace std;

// Function for Question 1
void fun(int a[])
{
    cout << a[0] << " ";
}

// Function for Question 2
void square(int *p)
{
    int a = 10;
    p = &a;
    *p = (*p) * (*p);
    // cout << *p << "\n";
}

// Function for Question 3
void swap(char *x, char *y)
{
    char *t = x;
    x = y;
    y = t;
}

int main()
{

    // Question 1
    int a[] = {1, 2, 3, 4};
    fun(a + 1);
    cout << a[0] << "\n\n";

    // Question 2
    int b = 10;
    square(&b);
    cout << b << "\n\n";

    // Question 3
    char *x = "ninjasquiz";
    char *y = "codingninjas";
    char *t;
    swap(x, y);
    cout << x << " " << y <<" ";
    t = x;
    x = y;
    y = t;
    cout << x << " " << y << "\n\n";
}