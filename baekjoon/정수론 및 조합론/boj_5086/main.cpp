#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;

    while (1)
    {
        cin >> n >> m;

        if (n == 0 && m == 0)
        {
            break;
        }
        if (n % m == 0)
        {
            cout << "multiple" << "\n";
        }
        else if (m % n == 0)
        {
            cout << "factor" << "\n";
        }
        else
        {
            cout << "neither" << "\n";
        }
        
    }
    

    return 0;
}