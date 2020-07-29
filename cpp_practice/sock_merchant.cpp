#include <bits/stdc++.h>

std::vector<string> split_string(string);

// Complete the sockMerchant function below.
int sockMerchant(int n, std::vector<int> ar) {
    std::sort(ar.begin(), ar.end());

    for(int i=0; i<ar.size(); ++i){
        std::cout << ar[i] << ' ';
    }

    int matching_socks = 0;
    for(int i=0; i<ar.size(); ++i){
        std::cout << i << std::endl;
        std::cout << ar[i] << std::endl;
        if (ar[i] == ar[i+1]){
            matching_socks++;
            if(ar[i] == ar[i+2]){
                i = i + 1;
            }
        }
        else{
            matching_socks = matching_socks;
        }
    }
    return matching_socks;
}
