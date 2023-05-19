#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, c;
    int arr[4] = {25, 10, 5, 1};

    cin >> t;

    while (t--)
    {
        cin >> c;

        for (int i = 0; i < 4; i++)
        {
            cout << c / arr[i] << " ";
            c %= arr[i];
        }
        cout << "\n";
    }

    return 0;
}