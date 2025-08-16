#include<iostream>
using namespace std;
double e(int x,int n){
    static double p=1, f=1;
    if(n==0)return 1;

    double result=e(x,n-1);
    p=p*x;
    f=f*n;
    return result+(p/f);


}
int main(){
    int x,n;
    cout<<"enter x for (e^x): ";
    cin>>x;
    cout<<"enter n for number of terms: ";
    cin>>n;
 cout << "e^"<<x<<"is : "<<e(x,n)<<endl;
 return 0;
}