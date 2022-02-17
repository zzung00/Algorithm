#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int count = 0;

    string s;
    getline(cin, s);

    char* tok = strtok((char*)s.c_str(), " ");

    while (tok != NULL)
    {
        tok = strtok(NULL, " ");
        count++;
    }
    cout << count << '\n';

    return 0;
}