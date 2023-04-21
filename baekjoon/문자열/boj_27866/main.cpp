#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    int pos = 0;
    
    cin >> str;
    cin >> pos;

    cout << str[pos - 1] << "\n";

    return 0;
}