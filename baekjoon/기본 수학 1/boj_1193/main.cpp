#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;
    int i = 1;

    while (x > i)
    {
        x -= i;
        i++;
    }

    if (i % 2 == 1)
    {
        cout << i + 1 - x << "/" << x << "\n";
    } 
    else {
        cout << x << "/" << i + 1 - x << "\n";
    }

    return 0;
}