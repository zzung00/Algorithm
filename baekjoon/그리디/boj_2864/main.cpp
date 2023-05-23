#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a, b;
    int max, min;

    cin >> a >> b;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '5')
        {
            a[i] = '6';
        }
    }

    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] == '5')
        {
            b[i] = '6';
        }
    }

    max = stoi(a) + stoi(b);

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '6')
        {
            a[i] = '5';
        }
    }
    
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] == '6')
        {
            b[i] = '5';
        }
    }

    min = stoi(a) + stoi(b);;

    cout << min << " " << max << "\n";

    return 0;
}