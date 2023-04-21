#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    string str;
    vector<string> s;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> str;
        s.push_back(str);
    }
    
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i].front() << s[i].back() << "\n";
    }    

    return 0;
}