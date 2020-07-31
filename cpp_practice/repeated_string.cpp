#include <bits/stdc++.h>

// Complete the repeatedString function below.
long repeatedString(std::string s, long n) {
    int len = s.length();
    long a_count = 0;
    long repeat;
    int leftover;
    for(int i = 0; i < len; i++){
        if(s[i] == 'a'){
            a_count++;
        }
    }
    repeat = n/len;
    a_count = a_count*repeat;
    leftover = n%len;
    for(int j = 0; j < leftover; j++){
        if(s[j]== 'a'){
            a_count++;
        }
    }
    return a_count;
}