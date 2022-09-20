#include <iostream>

using namespace std;

int gcd(int n, int m) {
    while (m > 0)
    {
        int tmp = n;
        n = m;
        m = tmp % m;
    }
    return n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;
    cout << gcd(n, m) << "\n";
    cout << gcd(n, m) * (n / gcd(n, m)) * (m / gcd(n, m)) << "\n";

    return 0;
}