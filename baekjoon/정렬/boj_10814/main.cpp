#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <string>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b) {
    return a.first < b.first;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    pair<int, string> p;
    vector<pair<int, string>> v;

    cin >> n;

    while (n--)
    {
        cin >> p.first >> p.second;
        v.push_back(p);
    }
    stable_sort(v.begin(), v.end(), compare);
    
    for (int i = 0; i < v.size(); i++)
    {        
        cout << v[i].first << " " << v[i].second << "\n";
    }

    return 0;
}