#include <iostream>
using namespace std;

// question 7 function
void changeSign(int *p)
{
    *p = (*p) * -1;
}

int main()
{
    char s[] = "hello";
    char *p = s;
    cout << s[0] << " " << p[0] << "\n\n";

    char arr[20];
    int i;
    for (i = 0; i < 10; i++)
    {
        *(arr + i) = 65 + i;
    }
    *(arr + i) = '\0';
    cout << arr << "\n\n";

    char *ptr;
    char Str[] = "abcdefg";
    ptr = Str;
    ptr += 5;
    cout << ptr << "\n\n";

    int numbers[5];
    int *p1;
    p1 = numbers;
    *p1 = 10;
    p1 = &numbers[2];
    *p1 = 20;
    p1--;
    *p1 = 30;
    p1 = numbers + 3;
    *p1 = 40;
    p1 = numbers;
    *(p1 + 4) = 50;
    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << "\n\n";

    char st1[] = "ABCD";

    for (int i = 0; st1[i] != '\0'; i++)
    {
        cout << st1[i] << *(st1) + i << *(i + st1) << i[st1];
    }
    cout << "\n\n";

    float arr1[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    float *ptr1 = &arr1[0];
    float *ptr2 = ptr1 + 3;
    cout << *ptr2 << "\n";
    cout << ptr2 - ptr1 << "\n\n"; // use some basic maths lol :P

    int a = 10;
    changeSign(&a);
    cout << a << "\n\n";
}