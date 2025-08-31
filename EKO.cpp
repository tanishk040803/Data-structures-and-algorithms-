#include <iostream>
#include <vector>
using namespace std;

bool canCut(vector<int>& trees, int m, int h) {
    long long sumOfWood = 0;
    for (int i = 0; i < trees.size(); i++) {
        int treeHeight = trees[i];
        if (treeHeight > h) {
            //   if mid is 15 ie h here and tree
            //  height is 10 so the answer should be 0 so we will not add 
            //  those numbers it will create negative values
            sumOfWood = sumOfWood + (treeHeight - h); 
        }
    }
    if (sumOfWood >= m) return true;
    else return false;
}

int main() {
    vector<int> trees = {20, 15, 10, 17};
    int m = 7;

    int start = 0;
    int end = *max_element(trees.begin(), trees.end()); // 20
    int ans = 0;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (canCut(trees, m, mid)) {
            ans = mid;
            start = mid + 1;   // try higher cut
        } else {
            end = mid - 1;  // try lower cut
        }
    }

    cout << ans << endl; 
}