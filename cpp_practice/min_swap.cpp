#include <bits/stdc++.h>

// Complete the minimumSwaps function below.
int minimumSwaps(std::vector<int> vect) {
    const int vect_size = vect.size();
    int min_swaps = 0;
    for(int i = 0; i < vect_size; i++){
        if(vect[i] != i+1){
            while (vect[i] != i + 1){
                int temp = 0; 
                temp = vect[vect[i] - 1]; 
                vect[vect[i] - 1] = vect[i]; 
                vect[i] = temp; 
                min_swaps++; 
            }
            i++;
        }
    }
    return min_swaps;
}
