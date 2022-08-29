#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    double r;
    cin >> r;

    cout << fixed;
    cout.precision(6);
    cout << 3.14159265359 * (r * r) << "\n";
    cout << 2 * (r * r) << "\n";

    return 0;
}