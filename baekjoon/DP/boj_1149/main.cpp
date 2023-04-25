#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    int arr[1001][3];
    int cost[3];

    cin >> n;

    arr[0][0] = 0;
    arr[0][1] = 0;
    arr[0][2] = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> cost[0] >> cost[1] >> cost[2];
        arr[i][0] = min(arr[i - 1][1], arr[i - 1][2]) + cost[0];
        arr[i][1] = min(arr[i - 1][0], arr[i - 1][2]) + cost[1];
        arr[i][2] = min(arr[i - 1][0], arr[i - 1][1]) + cost[2];
    }  
    cout << min(arr[n][0], min(arr[n][1], arr[n][2])) << "\n"; 
    
    return 0;
}