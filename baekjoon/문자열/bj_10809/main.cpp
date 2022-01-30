#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    vector<int> v(26, -1);

    for (int i = 0; i < s.size(); i++)
    {
        if (v[s[i] - 'a'] == -1)
        {
            v[s[i] - 'a'] = i;   
        }
    }

    for(int num : v) {
        cout << num << " ";
    }   

    return 0;
}