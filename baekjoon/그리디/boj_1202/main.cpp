#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;

    pair<int, int> jewerly[300001];
    int bag[300001];
    priority_queue<int> q;
    long long sum = 0;
    int idx = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> jewerly[i].first >> jewerly[i].second;
    }

    for (int i = 0; i < k; i++)
    {
        cin >> bag[i];
    }

    sort(jewerly, jewerly + n);
    sort(bag, bag + k);

    for (int i = 0; i < k; i++)
    {
        while (idx < n && bag[i] >= jewerly[idx].first)
        {
            q.push(jewerly[idx].second);
            idx++;
        }
        if (!q.empty())
        {
            sum += q.top(); 
            q.pop();
        }        
    }
    cout << sum << "\n";

    return 0;
}