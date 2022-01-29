#include <iostream>
#include <string>
#include <numeric>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string str;
    cin >> str;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += (str[i] - '0');
    }
    cout << sum << "\n";

    return 0;
}