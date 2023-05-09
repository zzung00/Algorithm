#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> p(n);

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    
    sort(p.begin(), p.end());
    int result = 0;

    for (int i = 0; i < p.size(); i++)
    {
        result += p[i] * (n - i);
    }
    cout << result << "\n";

    return 0;
}