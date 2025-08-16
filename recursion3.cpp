#include<iostream>
using namespace std;

void printeven(int n){
    if(n==0)return;   
     printeven(n-1);
    if (n%2==0){  
        cout<<n<<endl;
        
    }

   
}
int main(){
    int x=10;
    printeven(x);

    return 0;

}