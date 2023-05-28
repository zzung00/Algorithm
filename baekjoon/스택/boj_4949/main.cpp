#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;

    while (1)
    {
        stack<char> s;
        bool isVPS = true;
        getline(cin, str);

        if (str[0] == '.')
        {
            break;
        }
        
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '(' || str[i] == '[')
            {
                s.push(str[i]);
            }
            if (str[i] == ')')
            {
                if (s.empty() || s.top() == '[')
                {
                    isVPS = false;
                }
                else
                {
                    s.pop();
                }
            }
            if (str[i] == ']')
            {
                if (s.empty() || s.top() == '(')
                {
                    isVPS = false;
                }
                else
                {
                    s.pop();
                }
            }

        }
        if (s.empty() && isVPS)
        {
            cout << "yes" << "\n";
        }
        else
        {
            cout << "no" << "\n";
        }
        
    }

    return 0;
}