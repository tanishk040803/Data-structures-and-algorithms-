
// sum of n natural numbers.
#include<iostream>
using namespace std;

int  sum(int n){
    if(n==0) return 1; //base call
       
      return sum(n-1)+n; // recursive call
    }




int main(){
    int x=4;
    cout<<sum(x)<<endl;
    return 0;

}