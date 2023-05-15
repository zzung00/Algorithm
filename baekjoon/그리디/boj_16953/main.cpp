#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    int cnt = 0;

    cin >> a >> b;

    while (a < b)
    {
        if (b % 2 == 0)
        {
            b /= 2;
            cnt++;
        }
        else if (b % 10 == 1) 
        {
            b /= 10;
            cnt++;
        }        
        else
        {
            b = 0;
            break;
        }
    }
    
    if (a == b)
    {
        cout << cnt + 1 << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }    

    return 0;
}