#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;
    string str;
    map<string, int> mp;
    vector<string> name;

    for (int i = 0; i < n; i++)
    {
        cin >> str;
        name.push_back(str);
        mp.insert(make_pair(str, i+1));
    }

    for (int i = 0; i < m; i++)
    {
        cin >> str;

        if (str[0] >= '0' && str[0] <= '9')
        {
            cout << name[stoi(str)-1] << "\n";
        }
        else
        {
            cout << mp[str] << "\n";
        }
    }

    return 0;
}