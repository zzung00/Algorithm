#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int m) {
    if (m < 2)
    {
        return false;
    }
    
    for (int i = 2; i <= sqrt(m); i++)
    {
        if (m % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    int count = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> m;

        if (isPrime(m))
        {
            count++;
        }
    }
    cout << count;

    return 0;
}