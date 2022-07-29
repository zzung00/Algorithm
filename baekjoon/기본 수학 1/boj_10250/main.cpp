#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, height, weight, n, y, x;
    cin >> t;
    
    for (int i = 0; i < t; i++)
    {
        cin >> height >> weight >> n;
        y = n % height;
        x = n / height;

        if (y > 0)
        {
            x++;
        }
        else {
            y = height;
        }
        cout << y * 100 + x << "\n";
    }        
    
    return 0;
}