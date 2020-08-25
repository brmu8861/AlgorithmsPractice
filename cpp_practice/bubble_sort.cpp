#include <bits/stdc++.h>
//https://www.hackerrank.com/challenges/ctci-bubble-sort/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=sorting

// Complete the countSwaps function below.
void countSwaps(std::vector<int> a) {
    const int n = a.size();
    int counter = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            // Swap adjacent elements if they are in decreasing order
            if (a[j] > a[j + 1]) {
                std::swap(a[j], a[j + 1]);
                counter++;
            }
        }
        
    }
    std::cout << "Array is sorted in " << counter << " swaps." << "\n";
    std::cout << "First Element: " << a[0] << "\n";
    std::cout << "Last Element: " << a[n-1] << "\n";

}