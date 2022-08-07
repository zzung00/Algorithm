#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void isPrime(int n) {
    vector<bool> prime(1234567);
    int count = 0;

    for (int i = 2; i <= sqrt(n*2); i++)
    {
        if (prime[i])
        {
            continue;
        }
        
        for (int j = i*2; j <= n*2; j+=i)
        {
            prime[j] = true;
        }
    }

    for (int i = n+1; i <= n*2; i++)
    {
        if (!prime[i])
        {
            count++;
        }
    }    
    cout << count << "\n";
    count = 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    while (1)
    {
        cin >> n;

        if (n == 0)
        {
            break;
        }        
        isPrime(n);
    } 

    return 0;
}