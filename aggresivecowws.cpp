#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Helper to check if we can place 'c' cows in 'stalls' 
// such that the minimum distance between any two cows is at least 'dist'.
bool ispossible(const vector<int>& stalls, int c, int dist) {
    int count = 1;                // place first cow at first stall
    int last_pos = stalls[0];
    for(int i = 1; i < stalls.size(); i++) {
        if (stalls[i] - last_pos >= dist) {
            count++;
            last_pos = stalls[i];
            if (count == c) return true;
        }
    }
    return false;
}

int main() {
    int n, c;
    cout << "Enter the number of stalls: ";
    cin >> n;
    cout << "Enter the number of cows: ";
    cin >> c;

    vector<int> stalls(n);
    cout << "Enter the positions of the stalls:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> stalls[i];
    }

    // Sort the stall positions
    sort(stalls.begin(), stalls.end());

    // Binary search on answer (minimum distance)
    int low = 1; 
    int high = stalls.back() - stalls.front();
    int ans = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (ispossible(stalls, c, mid)) {
            // If we can place all cows with at least 'mid' distance, try larger
            ans = mid;
            low = mid + 1;
        } else {
            // Otherwise, try smaller distance
            high = mid - 1;
        }
    }

    cout << "The largest minimum distance is: " << ans << endl;
    return 0;
}