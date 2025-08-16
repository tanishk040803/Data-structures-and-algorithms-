#include<iostream>
using namespace std;
void A(int);
void B(int);

//recursive funcytion A 
void A(int n){
if(n>0){
    cout<<n<<endl;
    B(n-1);

}
}
//recursive funcytion A 
void B(int n){
if(n>0){
    cout<<n<<endl;
    A(n/2);

}
}
int main(){
    int a=20;
    A(a);
    return 0;
}


