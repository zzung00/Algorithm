#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v(26, 0);
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    int max = 0;
    int count = 0;
    int mindex = 0;

    for (int i = 0; i < s.size(); i++)
    { 
        v[s[i] - 'A']++;          
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > max)
        {
            max = v[i];
            mindex = i;
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == max)
        {
            count++;
        }
    }

    if (count >= 2)
    {
        cout << "?" << "\n";
    }else 
    {
        cout << static_cast<char>(mindex + 'A') << "\n";
    }    

    return 0;
}