#include <iostream>
#include <string>
#include <stack>

using namespace std;

int solution(string s)
{
    int answer = 0;
    stack<char> tmp;
    
    for (auto c : s)
    {
        if (!tmp.empty() && tmp.top() == c)
        {
            tmp.pop();
        }
        else
        {
            tmp.push(c);
        }
    }
    if (tmp.empty())
    {
        answer = 1;
    }

    return answer;
}

int main() {
    string s = "baabaa";
    cout << solution(s) << "\n";
}