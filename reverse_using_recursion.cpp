#include<iostream>
using namespace std;

int reversedigit(int n, int rev = 0) {
    if (n == 0) return rev; //Base call
    int lastdigit = n % 10;  
    rev = rev * 10 + lastdigit;
    return reversedigit(n / 10, rev);
}

int main() {
    int x = 12345;
    cout << "Reversed number is: " << reversedigit(x) << endl;
    return 0;
}