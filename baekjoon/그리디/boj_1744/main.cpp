#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;

    cin >> n;

    vector<int> positive;
    vector<int> negative;

    for (int i = 0; i < n; i++)
    {
        cin >> m;

        if (m > 0)
        {
            positive.push_back(m);
        }
        else
        {
            negative.push_back(m);
        }
    } 

    sort(positive.rbegin(), positive.rend());
    sort(negative.begin(), negative.end());
    int sum = 0;

    if (positive.size() % 2 != 0)
    {
        sum += positive[positive.size() - 1];
    }
    
    for (int i = 0; i < (int)positive.size() - 1; i+=2)
    {
        if (positive[i + 1] == 1)
        {
            sum += positive[i] + positive[i + 1];
        }
        else if (positive[i + 1] > 0)
        {
            sum += positive[i] * positive[i + 1];
        }
        
    }
    
    if (negative.size() % 2 != 0)
    {
        sum += negative[negative.size() - 1];
    }
    
    for (int i = 0; i < (int)negative.size() - 1; i+=2)
    {
        sum += negative[i] * negative[i + 1];
    }    
    cout << sum << "\n";
    
    return 0;
}