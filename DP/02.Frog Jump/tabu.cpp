#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> height{30, 27, 63, 98, 78, 34, 34};
    int n = height.size();
    vector<int> dp(n, -1);
    dp[0] = 0;

    for (int ind = 1; ind < n; ind++) {
        int step2 = INT_MAX;
        int step1 = dp[ind - 1] + abs(height[ind] - height[ind - 1]);
        if (ind > 1) {
            step2 = dp[ind - 2] + abs(height[ind] - height[ind - 2]);
        }
        dp[ind] = min(step1, step2);
    }

    cout << dp[n - 1];
    return 0;
}
