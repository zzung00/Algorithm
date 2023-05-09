#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, begin, end;
    cin >> n;
    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        cin >> begin >> end;
        v.push_back(make_pair(end, begin));
    }

    sort(v.begin(), v.end());
    int time = v[0].first;
    int count = 1;

    for (int i = 1; i < n; i++)
    {
        if (time <= v[i].second)
        {
            count++;
            time = v[i].first;
        }
    }
    cout << count << "\n";    

    return 0;
}