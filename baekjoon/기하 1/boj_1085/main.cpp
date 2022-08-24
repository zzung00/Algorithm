#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int m = min(x, y);

    if ((w - x) > m && (h - y) > m)
    {
        cout << m << "\n";
    }
    else
    {
        cout << min(w-x, h-y) << "\n";
    }

    return 0;
}