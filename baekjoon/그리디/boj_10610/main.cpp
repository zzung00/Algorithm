#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    int result = 0;
    int chk = 0;

    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        result += s[i] - '0';

        if (s[i] - '0' == 0)
        {
            chk = 1;
        }
                
    }

    if (result % 3 != 0 || chk == 0)
    {
        cout << -1 << "\n";
        return 0;
    }
    
    sort(s.rbegin(), s.rend());
    cout << s << "\n";

    return 0;
}