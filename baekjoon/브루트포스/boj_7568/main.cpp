#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    pair<int, int> p[50];
    int k = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> p[i].first >> p[i].second;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (p[i].first < p[j].first && p[i].second < p[j].second)
            {
                k++;
            }
        }
        cout << k + 1 << " ";
        k = 0;
    }    

    return 0;
}