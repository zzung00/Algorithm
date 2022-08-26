#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

void isRight(int a, int b, int c) {
    vector<int> v{a, b, c};
    sort(v.begin(), v.end());

    if (pow(v[2], 2) == pow(v[0], 2) + pow(v[1], 2))
    {
        cout << "right" << "\n";
    }
    else
    {
        cout << "wrong" << "\n";
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b, c;

    while (true)
    {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0)
        {
            break;
        }
        else 
        {
            isRight(a, b, c);
        }
    }

    return 0;
}