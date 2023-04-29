#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    long long dp[101];

    cin >> t;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;

    while (t--)
    {
        cin >> n;

        for (int i = 4; i <= n; i++)
        {
            dp[i] = dp[i - 2] + dp[i - 3];
        }
        cout << dp[n] << "\n";        
    }    

    return 0;
}