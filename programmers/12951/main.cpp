#include <string>
#include <vector>
#include <iostream>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = "";
    
    s[0] = toupper(s[0]);
    
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i - 1] == ' ')
        {
            s[i] = toupper(s[i]);
        }
        else
        {
            s[i] = tolower(s[i]);
        }
    }
    answer = s;
    
    return answer;
}

int main() {
    string s = "3people unFollowed me";
    cout << solution(s) << "\n";
}