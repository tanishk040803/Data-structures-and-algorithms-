#include<iostream>
using namespace std;

void reversearr(int arr[], int n ){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    }


void printarray(int arr[],int n){
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";

    }
    cout<<endl;
}

int main() {
    int arr[5]={10,20,30,40,50};
    int brr[6]={2,7,9,8,4,3};

  reversearr(arr,5);
  reversearr(brr,6);

  printarray(arr,5);
  printarray(brr,6);


    

    return 0;
}