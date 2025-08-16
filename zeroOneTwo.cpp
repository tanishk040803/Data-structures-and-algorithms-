

// this is two pointer approach but we can also just use sort function.
    
#include <iostream>
using namespace std;
void printarray(int arr[],int n){
   
    for(int i=0;i<n;i++){
         
        cout<<arr[i]<<" ";

    }
}
void sortOne(int arr[],int n){

    int low=0;
    int mid=0; 
    int high=n-1; 
    while(mid<=high){
       
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else if (arr[mid]> arr[high]){
            swap(arr[mid],arr[high]);
            high--; 
        }
       
        }

}


int main() {

int arr[10]={1,1,0,0,0,0,2,2,1,1};



 sortOne(arr,10);
 printarray(arr,10);

    return 0;
} 



