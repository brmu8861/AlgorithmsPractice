#include <bits/stdc++.h>

// https://www.hackerrank.com/challenges/counting-valleys/

int countingValleys(int n, std::string s) {
    int valley = 0;
    int elv = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'U'){
            elv++;
        }
        else{
            elv--;
        }
        if(elv == 0){
            if(s[i] == 'U'){
                valley++;
            }
        }
    }
    return valley;
}