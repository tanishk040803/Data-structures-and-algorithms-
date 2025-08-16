

// this is two pointer approach but we can also just use sort function.
    
#include <iostream>
using namespace std;
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void sortOne(int arr[],int n){
    int left=0; // left pointer
    int right=n-1; // right pointer .
    while(left<=right){
        if(arr[left]==0){
            left++;
        }
        else if(arr[right]==1){
            right--;
        }
        else {
             swap(arr[left],arr[right]);
             left++;
             right--;
       }

}
}

int main() {

int arr[10]={1,1,0,0,0,0,1,0,1,1};



 sortOne(arr,10);
 printarray(arr,10);

    return 0;
} 



