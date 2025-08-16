#include<iostream>
using namespace std;

int main() {
    int arr1[4] = {1, 2, 3, 4};
    int arr2[2] = {2, 3};

    float sum = 0;
    for(int i = 0; i < 4; i++) {
        sum += arr1[i];
    }

    for(int i = 0; i < 2; i++) {
        sum += arr2[i];
    }
    int n=4+2;

    cout << "Sum of all elements: " << sum/n << endl;

    return 0;
}