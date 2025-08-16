#include<iostream>
using namespace std;

void TOH(int n, char source, char helper, char destination) {
    if (n == 0)
        return;

    // Step 1: Move n-1 disks from source to helper
    TOH(n - 1, source, destination, helper);

    // Step 2: Move the nth disk from source to destination
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    // Step 3: Move the n-1 disks from helper to destination
    TOH(n - 1, helper, source, destination);
}

int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;

    TOH(n, 'S', 'H', 'D');
    return 0;
} 