#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x1, x2, y1, y2, r1, r2;
    int t, d, s1, s2;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        d = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
        s1 = (r1 - r2) * (r1 - r2);
        s2 = (r1 + r2) * (r1 + r2);
        
        if (d == 0)
        {
            cout << (r1 == r2 ? -1 : 0) << "\n";
        }
        else if (s1 == d || s2 == d)
        {
            cout << 1 << "\n";
        }
        else if (s1 < d && d < s2)
        {
            cout << 2 << "\n";
        }        
        else
        {
            cout << 0 << "\n";
        }
    }

    return 0;
}