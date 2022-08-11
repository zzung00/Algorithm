#include <iostream>
#include <cmath>

using namespace std;

void hanoi(int n, int src, int mid, int des) {
    if (n == 1)
    {
        cout << src << " " << des << "\n";
    }
    else 
    {
        hanoi(n-1, src, des, mid);
        cout << src << " " << des << "\n";
        hanoi(n-1, mid, src, des);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << (int) pow(2, n) - 1 << "\n"; 
    hanoi(n, 1, 2, 3);

    return 0;
}