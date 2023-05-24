#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> v(9);
    int sum;

    for (int i = 0; i < 9; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());      
    sum = accumulate(v.begin(), v.end(), 0);

    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (sum - (v[i] + v[j]) == 100)
            {
                for (int k = 0; k < 9; k++)
                {
                    if (k != i && k != j)
                    {
                        cout << v[k] << "\n";
                    }
                }
                return 0;
            }
            
        }
        
    }

    return 0;
}