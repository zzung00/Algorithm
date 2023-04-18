#include <iostream>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x, n, a, b;
    int amount;
    int max = 0;
    cin >> x >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        amount = a * b;
        max += amount;
    }

    if (max == x)
    {
        cout << "Yes" << "\n";
    }
    else
    {
        cout << "No" << "\n";
    }

    return 0;
}