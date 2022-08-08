#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int result = 1;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n == 0)
        {
            return result;
        }
        else
        {
            result *= i;
        }
    }
    cout << result << "\n";

    return 0;
}