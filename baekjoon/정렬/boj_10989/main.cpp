#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n;
    vector<int> count(10000, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> m;
        count[m]++;
    }

    for (int i = 1; i <= 10000; i++)
    {
        for (int j = 0; j < count[i]; j++)
        {
            cout << i << "\n";
        }   
    }

    return 0;
}