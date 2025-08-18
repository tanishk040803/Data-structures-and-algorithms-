 #include<iostream>
 using namespace std;

 
 bool ispossible(int arr[],int n ,int m ,int mid){
   int  painter=1;
   int  walls=0;

   for(int i=0;i<n;i++){
     if(walls + arr[i]<=mid){
        walls+=arr[i];
     }
     else{
        painter++;
        if(painter>m||arr[i]>mid){
            return false;
        }
        walls=arr[i];
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
cout<<"enter the number of walls : "<<endl;
cin>>n;

int m;
cout<<"enter the number of painters : "<<endl;
cin>>m;
 

cout<<"enter length of "<< n <<" walls "<<endl;
int arr[100];
for(int i=0;i<n;i++){
    cin>>arr[i];
}



int result=binarysearch(arr,n,m);
cout<<"the minimum time to paint all walls is : "<<result<<endl;
}