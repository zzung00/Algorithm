#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, int n) {
    string answer = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
        {
            s[i] = (((s[i] - 65) + n) % 26) + 65;
        }
        else if (islower(s[i]))
        {
            s[i] = (((s[i] - 97) + n) % 26) + 97;
        }
        
    }    
    answer = s;

    return answer;
}

int main() {
    string s = "yY";
    int n = 4;
    
    cout << solution(s, n) << "\n";
}