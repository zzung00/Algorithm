#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    else
    {
        return a.second < b.second;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    pair<int, int> p;
    vector<pair<int, int>> v;
    cin >> n;

    while (n--)
    {
        cin >> p.first >> p.second;
        v.push_back(p);
    }
    sort(v.begin(), v.end(), compare);
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << "\n";
    }
    

    return 0;
}