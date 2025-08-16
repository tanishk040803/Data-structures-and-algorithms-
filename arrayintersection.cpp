#include<iostream>
using namespace std;

void intersectionarr(int arr1[],int n,int arr2[],int m){
  sort(arr1,arr1+n);
  sort(arr2,arr2+m);
    int i=0 ,j=0;


    cout<<"the intersections are : ";
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
           cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;

        }
        else{
            j++;
        }

    }

     cout<<endl;
    
    }
    
   


    



int main(){

    int n;
    cout<<"enter the number of elements for firsr array: "<<endl;
    cin>>n;
    int arr1[100];
    cout<<"enter "<<n<<" elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
 int m;
    cout<<"enter the number of elementsfor second array : "<<endl;
    cin>>m;
    int arr2[100];
    cout<<"enter "<<m<<" elements"<<endl;
    for(int j=0;j<m;j++){
        cin>>arr2[j];
    }
 
  
  
  intersectionarr(arr1,n,arr2,m);
}