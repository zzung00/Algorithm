#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    int zero = 0;
    int one = 0;

    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s[i + 1])
        {
            if (s[i] == '0')
            {
                zero++;
            }
            else
            {
                one++;
            }            
        }
    }
    cout << min(zero, one) << "\n";

    return 0;
}