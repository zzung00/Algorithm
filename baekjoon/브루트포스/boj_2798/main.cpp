#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    int sum = 0;
    int max = 0;
    cin >> n >> m;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                sum = v[i] + v[j] + v[k];
                if (sum <= m && sum > max)
                {
                    max = sum;
                }
                
            }
            
        }
        
    }
    cout << max << "\n";

    return 0;
}