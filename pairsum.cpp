#include<iostream>
using namespace std;

void findPairsWithSum(int arr[], int size, int sum) {
    cout << "Pairs with sum " << sum << " are:" << endl;
    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[i] + arr[j] == sum) {
                cout << arr[i] << " + " << arr[j] << " = " << sum << endl;
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];  // Assuming size won't exceed 100
    cout << "Enter " << n << " elements:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int targetSum;
    cout << "Enter the target sum: ";
    cin >> targetSum;

    findPairsWithSum(arr, n, targetSum);

    return 0;
}