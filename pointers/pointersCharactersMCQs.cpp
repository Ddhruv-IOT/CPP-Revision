# include <iostream>
using namespace std;

int main() {
    char s[] = "hello";
    char *p = s;
    cout << s[0] << " " << p[0] << "\n\n";

    char arr[20];
    int i;
    for(i = 0; i < 10; i++) {
        *(arr + i) = 65 + i;
    }
    *(arr + i) = '\0';
    cout << arr << "\n\n";

    char *ptr;
    char Str[] = "abcdefg";
    ptr = Str;
    ptr += 5;
    cout << ptr << "\n\n";
}