#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, l;
    cin >> n >> l;

    vector<int> v(n);
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    int start = v[0];

    for (int i = 1; i < n; i++)
    {
        if (v[i] - start >= l)
        {
            ans++;
            start = v[i];
        }        
    }
    cout << ans + 1 << "\n";

    return 0;
}