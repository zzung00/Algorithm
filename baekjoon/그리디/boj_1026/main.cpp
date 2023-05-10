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
    int result = 0;
    int index;
    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    
    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        index = max_element(b.begin(), b.end()) - b.begin();
        result += a[i] * b[index];
        b[index] = 0;
    }
    cout << result << "\n";

    return 0;
}