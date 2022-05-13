#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    if (b >= c)
    {
        cout << "-1";

        return 0;
    }
    cout << a / (c - b) + 1; 
    
    return 0;
}