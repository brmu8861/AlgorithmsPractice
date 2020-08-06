#include <bits/stdc++.h>

std::vector<std::string> split_string(std::string);

// Complete the rotLeft function below.
std::vector<int> rotLeft(std::vector<int> a, int d) {
    int size_a = a.size();
    int rotation = d%size_a;
    std::vector<int> store;
    for(int i = rotation; i < size_a; i++){
        store.push_back(a[i]);
    }
    for(int i = 0; i < rotation; i++){
        store.push_back(a[i]);
    }
    return store;
}