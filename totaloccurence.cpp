#include<iostream>
using namespace std;
int firstoccurence(int arr[],int size,int key){


int start=0;
int end=size-1;
int mid=start+(end-start)/2;
int ans=-1;

while(start<=end){
    if(arr[mid]==key){
    ans=mid;
    end=mid-1;
    
}

if(key>arr[mid]){
    start=mid+1;

}

else{
    end=mid-1;
}

mid=start+(end-start)/2;
}

    return ans;



}
int lastoccurence(int arr[],int size,int key){


int start=0;
int end=size-1;
int mid=start+(end-start)/2;
int ans=-1;

while(start<=end){
    if(arr[mid]==key){
    ans=mid;
   start=mid+1;
    
}

if(key>arr[mid]){
start=mid+1;

}

else if(key<arr[mid]){
    end=mid-1;
}

mid=start+(end-start)/2;
}

    return ans;



}
int main(){


    int arr[9]={0,1,2,3,3,3,3,3,5};
    int index1 = firstoccurence(arr,9,3);
    int index2 = lastoccurence(arr,9,3);
 

    int totaloccurence=(index2-index1)+1;

    cout<<"The total number of occeurence are : "<<totaloccurence<<endl;

 

    
    
    return 0;
}




