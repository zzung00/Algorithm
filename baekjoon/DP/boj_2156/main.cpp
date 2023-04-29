#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    
    int amount[10001];
    int dp[10001];

    for (int i = 1; i <= n; i++)
    {
        cin >> amount[i];
    }

    dp[0] = 0;
    amount[0] = 0;
    dp[1] = amount[1];
    dp[2] = amount[1] + amount[2];

    for (int i = 3; i <= n; i++)
    {
        dp[i] = max({dp[i - 3] + amount[i - 1] + amount[i], dp[i - 2] + amount[i], dp[i - 1]});
    }
    cout << dp[n] << "\n";

    return 0;
}