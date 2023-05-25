#include <iostream>
#include <string>
#include <stack>

using namespace std;

int t;

string isVPS(string str)
{
    stack<char> s;
    
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(')
        {
            s.push('(');
        }
        else
        {
            if (s.empty())
            {
                return "NO";
            }
            else
            {
                s.pop();
            }
        }
    }
    if (s.empty())
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;
    
    cin >> t;

    while (t--)
    {
        cin >> str;
        cout << isVPS(str) << "\n";
    }

    return 0;
}