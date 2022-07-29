#include <iostream>

using namespace std;

int getCount(int k, int n) {
    if (k == 0)
    {
        return n;
    }
    else if (n == 1)
    {
        return 1;
    }
    
    return (getCount(k - 1, n) + getCount(k, n - 1));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, k, n;
    cin >> t;

    for (int j = 0; j < t; j++)
    {
        cin >> k >> n;
        cout << getCount(k, n) << "\n";
    }

    return 0;
}