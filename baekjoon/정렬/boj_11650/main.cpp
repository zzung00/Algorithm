#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    pair<int, int> p;
    vector<pair<int, int>> v;

    while (n--)
    {
        cin >> p.first >> p.second;
        v.push_back(p);
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << "\n";
    }

    return 0;
}