#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> height{30, 27, 63, 98, 78, 34, 34};
    int n = height.size();
    int prev = 0;
    int prev2 = 0;

    for(int i = 1; i < n; i++) {
        int step = prev + abs(height[i] - height[i - 1]);
        int step2 = INT_MAX;
        if(i > 1) {
            step2 = prev2 + abs(height[i] - height[i - 2]);
        }

        int curr = min(step, step2);
        prev2 = prev;
        prev = curr;
    }

    cout << prev;
    return 0;
}
