#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int idx = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            idx = 0;
            continue;
        }
        if (idx % 2)
        {
            s[i] = tolower(s[i]);
        }
        else
        {
            s[i] = toupper(s[i]);
        }
        idx++;
    }
    answer = s;

    return answer;
}

int main() {
    string s = "try hello world";
    cout << solution(s) << "\n";
}