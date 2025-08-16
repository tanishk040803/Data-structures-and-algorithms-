#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){


int start=0;
int end=size-1;
int mid=start+(end-start)/2;
//main condition
while(start<=end){
    if(arr[mid]==key){
    return mid;
    
}
//pointer takes right section of array
if(key>arr[mid]){
    start=mid+1;

}
//pointer takes left section of array
else{
    end=mid-1;
}
// updates the mid after updation of pointers
mid=start+(end-start)/2;
}
//for false result
    return -1;



}
int main(){


    int odd[5]={2,4,5,6,8};
    int even[6]={2,4,5,6,8,10};
    int index = binarysearch(odd,5,6);
     cout<<"index of 6 is :"<<index<<endl;//opt:3


    int index2 = binarysearch(even,6,20);
    cout<<"index of 20 is :"<<index2<<endl;//opt :-1
    
    return 0;
}




