#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> v(27, 0);
    int n;
    string s;

    cin >> n;

    while (n--)
    {
        cin >> s;
        int m = 1;

        for (int i = s.size() - 1; i >= 0; i--)
        {
            v[s[i] - 'A'] += m;
            m *= 10;
        }
        
    }
    
    sort(v.rbegin(), v.rend());
    int value = 9;
    int result = 0;

    for (int i = 0; i < 27; i++)
    {
        if (v[i] == 0)
        {
            break;
        }
        result += v[i] * value;
        value--;
    }
    cout << result << "\n";

    return 0;
}