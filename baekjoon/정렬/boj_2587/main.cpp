#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<int> v(5);

    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << sum / v.size() << "\n";

    return 0;
}