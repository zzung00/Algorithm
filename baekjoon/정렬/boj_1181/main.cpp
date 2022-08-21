#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compare(string a, string b) {
    if (a.size() == b.size())
    {
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] != b[i])
            {
                return a[i] < b[i];
            }

        }
        
    }
    return a.size() < b.size();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string str;
    vector<string> v;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> str;
        v.push_back(str);
    }
    sort(v.begin(), v.end(), compare);
    v.erase(unique(v.begin(), v.end()), v.end());

    for (string s : v)
    {
        cout << s << "\n";
    }

    return 0;
}