#include<iostream>
#include<vector>
using namespace std;

int  duplicate(int arr[], int n) {
    int ans = 0;
  

    // XOR all elements in the array
    for(int i = 0; i < n; i++) {
        ans =ans^arr[i];
        
    }

    // XOR with numbers from 1 to n
    for(int i = 1; i < n ; i++) {
        ans=ans^i;
        
    }

   return ans;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[100];
    
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result=duplicate(arr, n);
    cout<<"the duplicate is :"<<result<<endl;


    return 0;
}