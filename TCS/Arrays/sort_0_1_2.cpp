#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int arr[] = {0, 2, 1, 1, 0, 2, 2, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i += 1) { 
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j])
            { 
                swap(arr[i], arr[j]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    
    return 0;
}