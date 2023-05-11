#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long s;
    int count = 0;
    long long num = 1;
    long long sum = 0;
    
    cin >> s;

    while (true)
    {
        sum += num;
        count++;

        if (sum > s)
        {
            count--;
            break;
        }
        num++;
    }
    cout << count << "\n";

    return 0;
}