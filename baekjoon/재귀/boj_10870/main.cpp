#include <iostream>

using namespace std;

int fibo(int n) {
    if (n == 0)
    {
        return n;   
    }
    else if (n == 1)
    {
        return n;
    }
    
    return (n-1) * (n-2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    fibo(n);

    return 0;
}