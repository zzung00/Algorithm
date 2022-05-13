#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int count = 0;

    for (int i = 2; i <= n; count++)
    {
        i += 6 * count;
    }

    if (n == 1)
    {
        count = 1;
    }
    cout << count << "\n";

    return 0;
}