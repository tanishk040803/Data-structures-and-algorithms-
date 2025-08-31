#include<iostream>
using namespace std;

int main(){
    int arr[6] = {7, 9, 10, 24, 3, 1};

    for (int i = 0; i < 5; i++) {
        int minIndex = i;

        for (int j = i + 1; j < 6; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;   
            }
        }

        swap(arr[minIndex], arr[i]);
    }

  
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}