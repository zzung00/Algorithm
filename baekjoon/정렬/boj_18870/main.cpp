#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> v2(v);
    sort(v2.begin(), v2.end());
    v2.erase(unique(v2.begin(), v2.end()), v2.end());
    
    for (int i : v)
    {
        cout << lower_bound(v2.begin(), v2.end(), i) - v2.begin() << " ";
    }
    cout << "\n";

    return 0;
}