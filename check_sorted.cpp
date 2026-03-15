#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50}; 
    int n = 5;
    
    bool isSorted = true; // Assume it's sorted

    
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isSorted = false;
            break; // No need to check further
        }
    }

    if (isSorted) {
        cout << "The array is sorted.";
    } else {
        cout << "The array is NOT sorted.";
    }

    return 0;
}