// Problem Statement
// Suggest Edit
// You have been given a vector/list 'ARR' consisting of 'N' integers. You are also given a positive integer 'K'.
// Let's define a vector/list 'CONCAT' of size 'N* K' formed by concatenating 'ARR' 'K' times. For example, if 'ARR' = [0, -1, 2] 
// and 'K' = 3, then 'CONCAT' is given by [0, -1, 2, 0, -1, 2, 0, -1, 2]. 
// Your task is to find the maximum possible sum of any non-empty subarray (contagious) of 'CONCAT'.

#include <iostream>
#include <climits>  
#include <math.h>
#include <vector>
using namespace std;

int main() {
    std::vector<int> arr = {1, 2, -3, -6};

    int size = arr.size();
    int k_concat = 3;
    int new_size = size * k_concat;

    std::vector<int> concat(new_size);

    for(int i = 0; i < new_size; i++) {
        concat[i] = arr[i % size]; // for making circular array! 
    }

    int currSum = 0;
    int maxSum = INT_MIN;

    for(int j = 0; j < new_size; j++) {
        currSum += concat[j];
        maxSum = max(maxSum, currSum);

        if(currSum < 0) {
            currSum = 0;
        }
    }

    if (maxSum < 0) {
        maxSum = 0;
    }

    cout << "The maximum subarray sum is: " << maxSum << endl;
}