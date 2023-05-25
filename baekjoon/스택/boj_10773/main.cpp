#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int k, n;
    int sum = 0;
    stack<int> s;

    cin >> k;

    while (k--)
    {
        cin >> n;

        if (n == 0)
        {
            s.pop();
        }
        else
        {
            s.push(n);
        }
    }  

    while (!s.empty())
    {
        sum += s.top();
        s.pop();   
    }    
    cout << sum << "\n";    

    return 0;
}