#include <string>
#include <iostream>
#include <queue>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    queue<char> q;
    string str;
    
    for (int i = 0; i < s.size(); i++)
    {        
        if (s[i] == '(')
        {
            q.push(s[i]);
        }
        else
        {
            if (!q.empty() && q.front() == '(')
            {
                q.pop();
            }
            else
            {
                q.push(s[i]);
            }
        }
    }
    if (q.empty())
    {
        answer = true;
    }
    else
    {
        answer = false;
    }

    return answer;
}

int main() {
    string s = "()()";
    cout << solution(s) << "\n";
}