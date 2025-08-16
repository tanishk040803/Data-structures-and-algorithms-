#include<iostream>
using namespace std;
int main(){


    //method 1 (hard input)
    int arr1[2][3]={
         {10,20,30 },
         {40, 50,60}
    };

for (int i=0;i<2;i++){
    for (int j=0;j<3;j++){
        cout<<arr1[i][j]<<" ";
}


cout<<endl;
}

// method 2 (taking input)

int arr2[100][100];
int rows;
cout<<"how many rows ? "<<endl;
cin>>rows;

int cols;
cout<<"how many colomns? "<<endl;
cin>>cols;
cout<<" enter "<<rows*cols<<"elemets: "<<endl;
for (int i=0;i<rows;i++){
    for (int j=0;j<cols;j++){
        cin>>arr2[i][j];
}
cout<<endl;

}

for (int i=0;i<rows;i++){
    for (int j=0;j<cols;j++){
        cout<<arr2[i][j]<<" ";
}
cout<<endl;
}

// method3 (using pointer)
int *arr3[2];
arr3[0]=new int [3];
arr3[1]=new int [3];







return 0;

}