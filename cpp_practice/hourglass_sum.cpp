#include <bits/stdc++.h>

// Complete the hourglassSum function below.
int hourglassSum(std::vector<std::vector<int>> arr) {
    long hourglass_sum = -2147483647;
    long sum;
    for(int j = 0; j < 6; j++){
        for(int i = 0; i < 6; i++){
            if (j + 2 < 6 && i + 2 < 6){
                sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j]                   + arr[i+2][j+1] + arr[i+2][j+2];
            }
            if(sum > hourglass_sum){
                hourglass_sum = sum;
            }
        }
    }
    return hourglass_sum;
}