#include <string>
#include <vector>
#include <iostream>
#include <cctype>

using namespace std;

bool solution(string s) {
    bool answer = true;

    if (!(s.size() == 4 || s.size() == 6))
    {
        answer = false;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]) == 0)
        {
            answer = false;
            break;
        }
    }
    
    return answer;
}

int main() {
    string s = "a234";
    cout << solution(s) << "\n";
}