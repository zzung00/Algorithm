#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    int dp[16] = {0, };
    int t[16] = {0, };
    int p[16] = {0, };

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> t[i] >> p[i];
    }    

    for (int i = n; i >= 1; i--)
    {
        if ((i + t[i]) > (n + 1))
        {
            dp[i] = dp[i + 1];
        }
        else
        {
            dp[i] = max(dp[i + t[i]] + p[i], dp[i + 1]);
        }
    }
    cout << dp[1] << "\n";

    return 0;
}