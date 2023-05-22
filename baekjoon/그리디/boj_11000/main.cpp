#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    priority_queue<int, vector<int>, greater<int>> q;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());
    q.push(v[0].second);

    for (int i = 1; i < n; i++)
    {
        q.push(v[i].second);

        if (q.top() <= v[i].first)
        {
            q.pop();
        }
        
    }
    cout << q.size() << "\n";

    return 0;
}