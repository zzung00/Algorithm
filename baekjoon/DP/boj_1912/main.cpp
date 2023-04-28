#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    int dp[100001];
    int arr[100001];

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int result = arr[0];
    dp[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        dp[i] = max(dp[i - 1] + arr[i], arr[i]);
        result = max(result, dp[i]);
    }
    cout << result << "\n";

    return 0;
}