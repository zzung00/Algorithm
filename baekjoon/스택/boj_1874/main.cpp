#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    int cnt = 1;
    vector<char> v;
    stack<int> s;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> m;

        while (cnt <= m)
        {
            v.push_back('+');
            s.push(cnt);
            cnt++;
        }
        
        if (m == s.top())
        {
            s.pop();
            v.push_back('-');
        }
        else
        {
            cout << "NO" << "\n";
            return 0;
        }
    }
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\n";
    }
    

    return 0;
}