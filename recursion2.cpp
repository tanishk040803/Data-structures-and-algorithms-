#include <iostream>
using namespace std;

void print1ton(int n){
    if (n == 0) return;
     print1ton(n-1);
     cout << n <<endl;
      
    }
   


int main() {
     int x;
     cout<<"Enter a number:"<<endl;
     cin>>x;
     print1ton(x);
     
    return 0;
}