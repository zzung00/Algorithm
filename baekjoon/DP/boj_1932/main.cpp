#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    int m = 0;
    int dp[501][501];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cin >> dp[i][j];
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i == j)
            {
                dp[i][j] += dp[i - 1][j - 1];
            }
            else if (j == 0)
            {
                dp[i][j] += dp[i - 1][j];
            }
            else
            {
                dp[i][j] += max(dp[i - 1][j - 1], dp[i - 1][j]);
            }
            m = max(m, dp[i][j]);
        }
        
    }
    cout << m << "\n";

    return 0;
}