#include <bits/stdc++.h>

vector<string> split_string(string);

// Complete the jumpingOnClouds function below.
int jumpingOnClouds(std::vector<int> c) {
    int min_jumps = 0;
    int n = c.size();
    for(int i = 0; i < n-1; i++){
        if(c[i+2] == 0){
            i++;
            min_jumps++;
        }
        else{
            min_jumps++;
        }

    }
    return min_jumps;
}