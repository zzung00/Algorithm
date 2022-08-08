#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void prime(int n) {
    vector<bool> isPrime(100000);
    isPrime[0] = true;
    isPrime[1] = true;
    
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (isPrime[i])
        {
            continue;
        }
        for (int j = i*2; j <= n; j+=i)
        {
            isPrime[j] = true;
        }
    }

    for (int i = n/2; i >= 2; i--)
    {
        if (!isPrime[i] && !isPrime[n - i])
        {
            cout << i << " " << n - i << "\n";
            break;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        prime(n);
    }
    
    return 0;
}