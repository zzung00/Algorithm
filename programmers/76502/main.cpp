#include <string>
#include <vector>
#include <iostream>
#include <stack>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    for (int i = 0; i < s.size(); i++)
    {
        stack<char> tmp;
        bool flag = false;
        
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '[' || s[i] == '{' || s[i] == '(')
            {
                tmp.push(s[i]);
                flag = true;
            }
            else
            {
                if (s[i] == ']' && tmp.top() == '[')
                {
                    tmp.pop();
                }
                if (s[i] == '}' && tmp.top() == '{')
                {
                    tmp.pop();
                }
                if (s[i] == ')' && tmp.top() == '(')
                {
                    tmp.pop();
                }
            }
        }
        if (tmp.empty() && flag)
        {
            answer++;
        }

        char c = s.front();
        s.erase(s.begin());
        s.push_back(c);
    }
    return answer;
}

int main() {
    string s = "[](){}";
    cout << solution(s) << "\n";
}