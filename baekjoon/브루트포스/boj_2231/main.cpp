#include <iostream>

using namespace std;

int decompose(int n) {
    int sum = n;

    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        int sum = decompose(i);

        if (sum == n)
        {
            cout << i << "\n";
            return 0;
        }
    }
    cout << 0 << "\n";

    return 0;
}