#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

static bool comp(pair<int, int>& a, pair<int, int>& b) {
	return a.second > b.second;
}

vector<int> solution(string s) {
    vector<int> answer;
    unordered_map<int, int> m;
    string str;
    
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '{' && s[i] != '}' && s[i] != ',')
        {
            str += s[i];
            
            if (s[i + 1] != '}' && s[i + 1] != ',')
            {
                continue;
            }
            m[stoi(str)]++;
        }
        str = "";
    }    
    vector<pair<int, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), comp);
    
    for (auto i : v)
    {
        answer.push_back(i.first);
    }
    
    return answer;
}

int main() {
    string s = "{{2},{2,1},{2,1,3},{2,1,3,4}}";
    vector<int> result = solution(s);

    for (int i : result)
    {
        cout << i << " ";
    }
    cout << "\n";
}