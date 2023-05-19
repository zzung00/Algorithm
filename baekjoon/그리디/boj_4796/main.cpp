#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int l, p, v;
    int cnt = 0;
    int ans;

    while (true)
    {
        cin >> l >> p >> v;

        if (l == 0 && p == 0 && v == 0)
        {
            break;
        }

        ans = (v / p) * l + min(v % p, l);
        cnt++;
        cout << "Case " << cnt << ": " << ans << "\n";        
    }

    return 0;
}