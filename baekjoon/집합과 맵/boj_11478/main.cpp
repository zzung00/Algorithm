#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string str, result;
    set<string> s;
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        for (int j = 1; j < str.size() - i + 1; j++)
        {
            s.insert(str.substr(i, j));
        }
    }    
    cout << s.size() << "\n";

    return 0;
}