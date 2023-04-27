#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> dp(1001);
    int result = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        int m = 0;

        for (int j = 0; j < v.size(); j++)
        {
            if (v[i] > v[j])
            {
                if (m < dp[j])
                {
                    m = dp[j];
                }
                
            }
            
        }
        dp[i] = m + 1;
        result = max(result, dp[i]);
    }
    cout << result << "\n";
    
    return 0;
}