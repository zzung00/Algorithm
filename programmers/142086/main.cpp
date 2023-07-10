#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    unordered_map<char, int> m;
    
    for (int i = 0; i < s.size(); i++)
    {
        if (m.find(s[i]) == m.end())
        {
            m[s[i]] = i;
            answer.push_back(-1);
        }
        else
        {
            answer.push_back(i - m[s[i]]);
            m[s[i]] = i;
        }
    }
    return answer;
}

int main() {
    string s = "banana";
    vector<int> result = solution(s);

    for (auto i : result)
    {
        cout << i << " ";
    }
    cout << "\n";
}