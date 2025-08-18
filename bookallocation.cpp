 #include<iostream>
 using namespace std;

 
 bool ispossible(int arr[],int n ,int m ,int mid){
   int  student=1;
   int  pagesum=0;

   for(int i=0;i<n;i++){
     if(pagesum + arr[i]<=mid){
        pagesum +=arr[i];
     }
     else{
        student++;
        if(student>m||arr[i]>mid){
            return false;
        }
        pagesum=arr[i];
     }
   }
   return true;

   

}

int binarysearch(int arr[],int n,int m){
    int s=0;

    int sum=0;
    int ans=-1;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;

   
    while(s<=e){
         int mid=s+(e-s)/2;
        if(ispossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;

}
int main(){

int n;
cout<<"enter the number of elements : "<<endl;
cin>>n;

int m;
cout<<"enter the number of students : "<<endl;
cin>>m;
 

cout<<"enter "<< n <<" elements "<<endl;
int arr[100];
for(int i=0;i<n;i++){
    cin>>arr[i];
}



int result=binarysearch(arr,n,m);
cout<<"the minimum of all the allocated pages are : "<<result<<endl;
}