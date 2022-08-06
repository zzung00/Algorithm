#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int prime(int n, int m) {
    vector<bool> isPrime(m + 1);
    isPrime[1] = true;

    for (int i = 2; i <= sqrt(m); i++)
    {
        if (!isPrime[i])
        {
            for (int j = i*2; j <= m; j+=i)
            {
                isPrime[j] = true;
            }
        }
    }

    for (int i = n; i <= m; i++)
    {
        if (!isPrime[i])
        {
            cout << i << "\n";
        }   
    }
    
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    prime(n, m);

    return 0;
}