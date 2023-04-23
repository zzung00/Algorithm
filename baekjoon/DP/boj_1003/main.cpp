#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    cin >> t;
    vector<int> dp(41);

    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i < 41; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    
    while (t--)
    {
        cin >> n;

        if (n == 0)
        {
            cout << 1 << " " << 0 << "\n";
        }
        else if (n == 1)
        {
            cout << 0 << " " << 1 << "\n";
        }
        else
        {
            cout << dp[n - 1] << " " << dp[n] << "\n";     
        }
       
    }
        
    return 0;
}