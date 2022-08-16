#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int m = 665;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        while (1)
        {
            m++;
            if (to_string(m).find("666") != -1)
            {
                break;
            }
        }
    }
    cout << m << "\n";

    return 0;
}