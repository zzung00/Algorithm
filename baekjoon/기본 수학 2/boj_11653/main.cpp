#include <iostream>

using namespace std;

int prime(int n) {
    if (n == 1)
    {
        return 0;
    }

    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            cout << i << "\n";
            n /= i;
        }
    }
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    prime(n);

    return 0;
}