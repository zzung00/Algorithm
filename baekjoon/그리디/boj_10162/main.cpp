#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    int a, b, c;

    cin >> t;

    if (t % 10 != 0)
    {
        cout << -1 << "\n";
    }
    else
    {
        a = t / 300;
        t %= 300;

        b = t / 60;
        t %= 60;

        c = t / 10;

        cout << a << " " << b << " " << c << "\n";
    }
    
    return 0;
}