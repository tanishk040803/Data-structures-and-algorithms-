#include<iostream>
using namespace std;
int addone(int arr[],int n){
    int ans;
    for(int i=0;i<n;i++){
        if(arr[i]<=9){
            arr[i]++;
        }
        else{
           ans=arr[i]+1;
        }
      
    }
      return ans;

}
int main(){
int n;
cout<<"Enter the size of array: ";
cin>>n;
int arr[n];
cout<<"Enter the elements of array: ";
for(int i=0;i<n;i++){
    cin>>arr[i];  
    int result = addone(arr, n); 
    cout<<result;
    
}
}