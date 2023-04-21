#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, a, b;
    cin >> n >> m;
    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
    {
        v[i] = i;
    }

    while (m--)
    {
        cin >> a >> b;
        reverse(v.begin() + a, v.end() - n + b);
    }

    for (int i = 1; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }    
    
    return 0;
}