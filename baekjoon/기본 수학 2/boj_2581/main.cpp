#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    int sum = 0;
    int count = 0;
    int min = -1;
    cin >> m >> n;

    for (int i = m; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            if (min == -1)
            {
                min = i;
            }
            sum += i;
        }
        count = 0;
    }
    if (min == -1)
    {
        cout << -1 << "\n";
    }
    else 
    {
        cout << sum << "\n" << min << "\n";
    }
    

    return 0;
}