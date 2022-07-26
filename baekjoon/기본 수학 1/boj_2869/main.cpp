#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, v;
    cin >> a >> b >> v;
    int day;

    if (((v - a) % (a - b)) == 0)
    {
        day = (v - a) / (a - b);
    }
    else {
        day = (v - a) / (a - b) + 1;
    }
    cout << day + 1 << "\n";
    
    return 0;
}