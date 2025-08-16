#include<iostream>
using namespace std;

void findunique(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans^=arr[i];

    }
    cout<<"unique element is : "<<ans<<endl;
    
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){

    int n;
    cout<<"enter the number of elements: "<<endl;
    cin>>n;
    int arr[100];
    cout<<"enter"<<n<<"elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 
  
  findunique(arr,n);
}