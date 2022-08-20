#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string str;
    cin >> n;
    str = to_string(n);

    sort(str.begin(), str.end(), greater());
    cout << str << "\n";

    return 0;
}