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

    vector<long long> dist(n - 1);
    vector<long long> cost(n); 
    long long result;
    long long sum;

    for (int i = 0; i < (n - 1); i++)
    {
        cin >> dist[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cin >> cost[i];
    }

    sum = cost[0];
    result = 0;

    for (int i = 0; i < (n - 1); i++)
    {
        sum = min(sum, cost[i]);
        result += dist[i] * sum;
    }
    cout << result << "\n";

    return 0;
}