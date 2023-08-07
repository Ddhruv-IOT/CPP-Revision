// You are given an array of integers ARR[] of size N consisting of zeros and ones. You have to select a subset and flip bits of that subset. 
// You have to return the count of maximum one’s that you can obtain by flipping chosen sub-array at most once.

#include <iostream>
#include <climits>
#include <math.h>
using namespace std;

int main() {
    int arr [] = {1, 0, 0, 1, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int currSum = 0;
    int maxSum = 0;
    int countOne = 0;

    for(int i = 0; i < n; i++) 
    {
        if (arr[i] == 1){
            cout << arr[i] << endl;
            arr[i] = -1;
            countOne++;
        }
        else {
            arr[i] = 1;
        }
        currSum += arr[i];
        maxSum = max(maxSum, currSum);

        if (currSum < 0) {
            currSum = 0;
        }
    }
    cout << maxSum + countOne << endl;

}