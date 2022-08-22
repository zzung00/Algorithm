#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;
    map<string, bool> mp;
    string str;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> str;
        mp[str] = true;
    }

    for (int i = 0; i < m; i++)
    {
        cin >> str;
        
        if (mp[str])
        {
            count++;
        }
        
    }
    cout << count << "\n";    

    return 0;
}