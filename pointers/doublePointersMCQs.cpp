#include <iostream>
using namespace std;


// function for question 1
int f(int x, int *py, int **ppz)
{
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    return x + y + z;
}

// function for question 3
void increment(int **p)
{
    (**p)++;
}

int main() {

    // question 1
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    cout << f(c, b, a) << "\n\n";

    // question 2
    int ***r, **q, *p, i = 8;
    p = &i;
    (*p)++;
    q = &p;
    (**q)++;
    r = &q;
    cout << *p << " " << **q << " " << ***r << "\n\n";

    // question 3
    int num = 10;
    int *ptr = &num;
    increment(&ptr);
    cout << num << "\n\n";

}