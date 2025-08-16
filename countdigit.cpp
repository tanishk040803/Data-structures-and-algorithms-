#include<iostream>
using namespace std;

int countdigits(int n){
    if(n==0)return 0;
    return 1 + countdigits(n/10);

}
int main(){
 int x=123456;

cout<<"The number of digits are: "<<countdigits(x)<<endl;
return 0;
}
   


