#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<int> vn;
    vector<int> vm;
    int n, m, num;
    cin >> n >> m;

    while (n--)
    {
        cin >> num;
        vn.push_back(num);
    }
    while (m--)
    {
        cin >> num;
        vm.push_back(num);
    }
    sort(vn.begin(), vn.end());
    sort(vm.begin(), vm.end());

    vector<int> n_diff;
    vector<int> m_diff;
    set_difference(vn.begin(), vn.end(), vm.begin(), vm.end(), inserter(n_diff, n_diff.begin()));
    set_difference(vm.begin(), vm.end(), vn.begin(), vn.end(), inserter(m_diff, m_diff.begin()));

    cout << n_diff.size() + m_diff.size() << "\n";

    return 0;
}