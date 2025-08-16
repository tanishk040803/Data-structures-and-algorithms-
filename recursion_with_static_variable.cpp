#include<iostream>
using namespace std;
 int fun(int n){
    static int x;
    if(n>0){
        x++;
    return fun(n-1)+x; // if we add n ipo x opt. will be 15
    }
    return 0;
 }
 int main(){
    int a=5;
    cout <<fun(a)<<endl;

    return 0;
 }