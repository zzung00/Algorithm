#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    map<char, int> m;
    
    for (int i = 0; i < skill.size(); i++)
    {
        m[skill[i]] = i + 1;
    }    
    for (string skill_tree : skill_trees)
    {
        int cnt = 1;
        bool chk = true;
        
        for (char skt : skill_tree)
        {
            if (m[skt] > cnt)
            {
                chk = false;
                break;
            }
            else if (m[skt] == cnt)
            {
                cnt++;
            }
        }
        if (chk)
        {
            answer++;
        }
    }
    return answer;
}

int main() {
    string skill = "CBD";
    vector<string> skill_trees = {"BACDE", "CBADF", "AECB", "BDA"};
    cout << solution(skill, skill_trees) << "\n";
}