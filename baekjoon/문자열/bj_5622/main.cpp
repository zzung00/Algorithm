#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n;
    int time = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'Z')
        {
            n = 2;
        }
        else if (s[i] >= 'S')
        {
            n = 1;
        }
        else 
        {
            n = 0;
        }
        time += (s[i] - 'A' - n) / 3 + 3;   
    }
    cout << time << "\n";

    return 0;
}