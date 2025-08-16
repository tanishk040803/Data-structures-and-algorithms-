#include<iostream>
using namespace std;
long long power(long long base, long long exponent){
    if(exponent==0)return 1;
    return base*power(base,exponent-1);
}
int main(){
    long long a=12;
    long long b=8;
    long long ans=power(a,b);
    cout<<"the value is :"<<ans<<endl;
    return 0;

}