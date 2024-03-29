#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    string str;
    stack<int> s;

    cin >> n;

    while (n--)
    {
        cin >> str;

        if (str == "push")
        {
            int m;
            cin >> m;
            s.push(m);
        }
        else if (str == "pop")
        {
            if (s.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << s.top() << "\n";
                s.pop();
            }
        }
        else if (str == "size")
        {
            cout << s.size() << "\n";
        }
        else if (str == "empty")
        {
            if (s.empty())
            {
                cout << 1 << "\n";
            }
            else
            {
                cout << 0 << "\n";
            }
        }
        else 
        {
            if (s.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << s.top() << "\n";
            }
        }
    }

    return 0;
}