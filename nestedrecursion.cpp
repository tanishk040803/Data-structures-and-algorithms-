#include<iostream>
using namespace std;

int fun(int n){
    if(n>100){   //base call
       return n-10;
    }
    else {
        return fun(fun(n+11));
    }
}

int main(){
    int x=95;
    fun(x);
    cout<<fun(x);
    return 0;

}