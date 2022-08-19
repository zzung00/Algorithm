#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater());

    for (int i = 0; i < v.size(); i++)
    {
        if (i == k-1)
        {
            cout << v[i] << "\n";   
        }
    }

    return 0;
}