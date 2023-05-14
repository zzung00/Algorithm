#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        pair<int, int> grade[n];
        
        for (int i = 0; i < n; i++)
        {
            cin >> grade[i].first >> grade[i].second;
        }
        sort(grade, grade + n);

        int count = 0;
        int m = grade[0].second;

        for (int i = 1; i < n; i++)
        {
            m = min(grade[i].second, m);

            if (m < grade[i].second)
            {
                count++;
            }
            
        }
        cout << n - count << "\n";
    }

    return 0;
}