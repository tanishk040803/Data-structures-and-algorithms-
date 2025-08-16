#include<iostream>
using namespace std;
double e(int x,int n){
    static double s=1;
    if(n==0)return s;

    s=1+(x*s)/n;
    return e(x,n-1);

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