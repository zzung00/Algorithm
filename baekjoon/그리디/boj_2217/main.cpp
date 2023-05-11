#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    int result = 0;
    vector<int> w(100001);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }  

    sort(w.rbegin(), w.rend());

    for (int i = 0; i < n; i++)
    {
        result = max(result, w[i] * (i + 1));        
    } 
    cout << result << "\n";

    return 0;
}