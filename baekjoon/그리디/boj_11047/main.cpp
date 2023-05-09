#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    vector<int> v(10);
    int count = 0;

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    sort(v.rbegin(), v.rend());

    for (int i = 0; i < n; i++)
    {
        while (k - v[i] >= 0)
        {
            count++;
            k -= v[i];
        }
              
    }
    cout << count << "\n";

    return 0;
}