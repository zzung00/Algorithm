#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int pay;
    int changes[6] = {500, 100, 50, 10, 5, 1};
    int count = 0;

    cin >> pay;
    pay = 1000 - pay;

    for (int i = 0; i < 6; i++)
    {
        while (pay - changes[i] >= 0)
        {
            count++;
            pay -= changes[i];
        }
    }    
    cout << count << "\n";

    return 0;
}