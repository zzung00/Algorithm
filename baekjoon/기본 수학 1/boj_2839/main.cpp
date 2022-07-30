#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define MAX 5001

void getMin(int n) {
    vector<int> dp(n + 1, MAX);
    dp[3] = 1;
    dp[5] = 1;

    for (int i = 6; i <= n; i++)
    {
        dp[i] = min(dp[i - 5] + 1, dp[i - 3] + 1);
    }

    if (dp[n] >= MAX)
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << dp[n] << "\n";
    }   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;    
    getMin(n);

    return 0;
}