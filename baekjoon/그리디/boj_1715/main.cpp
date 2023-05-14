#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    priority_queue<int, vector<int>, greater<int>> q;
    
    cin >> n;

    while (n--)
    {
        cin >> m;
        q.push(m);
    }
    
    int sum = 0;

    while (q.size() > 1)
    {
        int a, b;
        a = q.top(), q.pop();
        b = q.top(), q.pop();
        sum += (a + b);
        q.push(a + b);
    }
    cout << sum << "\n";
    

    return 0;
}