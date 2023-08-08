#include <bits/stdc++.h> 
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    //Write your code here
    int principle = 1, time = 1;
    float rate = 1, op = 0;
    cin >> principle >> rate >> time;
    op = ((principle * time * rate)/100);
    cout << floor(op);

    return 0;
}