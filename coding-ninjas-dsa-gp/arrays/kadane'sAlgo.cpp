// Implementation of Kadane's Algorithm

#include <iostream>
#include <climits>
#include <math.h>
using namespace std;

int main(){
    int maxi = INT_MIN;
    int currSum = 0;
    int arr[] = {-1, 2, -2, 5, 7,-2, 10, 50, -3, 1};

    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        currSum += arr[i];
        // if (currSum > 0 && currSum > maxi) {
        //     maxi = currSum;
        // }
        maxi = max(maxi, currSum);
        // currSum = maxi;
        
        if (currSum < 0) {
            currSum = 0;
        }
    }
    cout << maxi << endl;
}