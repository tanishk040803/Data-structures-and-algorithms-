#include<iostream>
using namespace std;

int main() {
    int arr[6] = {7, 9, 10, 24, 3, 1};

    // Bubble Sort
    for (int i = 0; i < 5; i++) { // n-1 passes
        for (int j = 0; j < 6 - i - 1; j++) { //compare until n-ith element.
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]); // swap adjacent if out of order
            }
        }
    }

    // Print sorted array
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}