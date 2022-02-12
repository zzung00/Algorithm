#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int m;
    string s;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> m >> s;
        for (int j = 0; j < s.size(); j++)
        {
            for (int k = 0; k < m; k++)
            {
                cout << s[j];
            }    
        }
        cout << "\n";
    }
    
    return 0;
}