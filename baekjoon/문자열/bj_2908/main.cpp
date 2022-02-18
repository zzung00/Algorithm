#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string a;
    string b;

    cin >> a;
    cin >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    if (a > b)
    {
        cout << a << "\n";
    }
    else 
    {
        cout << b << "\n";
    }

    return 0;
}