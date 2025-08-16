#include<iostream>
using namespace std;
//bool is used here to return true or false.
bool search(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return true;
        }
    }
    return false;
}
/* if we predefine array we dont have to do all this , we just define array
like int arr[5]={10 , 20, 30, 40 ,50 }*/
int main() {
    int arr[100];
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter " << n << " numbers: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "You entered: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int element;
    cout << "Enter the element to search for: ";
    cin >> element;

    bool found = search(arr, n, element);

    if(found) {
        cout << "The element is present" << endl;
    } else {
        cout << "Element is not present" << endl;
    }

    return 0;
}