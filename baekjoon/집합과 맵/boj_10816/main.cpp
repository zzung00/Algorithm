#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n;
    vector<int> vn(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vn[i];
    }
    sort(vn.begin(), vn.end());

    cin >> m;
    vector<int> vm(m);

    for (int i = 0; i < m; i++)
    {
        cin >> vm[i];
    }

    for (int i : vm)
    {
        cout << upper_bound(vn.begin(), vn.end(), i) - lower_bound(vn.begin(), vn.end(), i) << " ";
    }
    cout << "\n";

    return 0;
}