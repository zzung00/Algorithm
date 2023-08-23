#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <unordered_map>
#include <unordered_set>

using namespace std;

#define N 65536

int solution(string str1, string str2) {
    int answer = 0;
    string s = "";
    unordered_map<string, int> m1;
    unordered_map<string, int> m2;
    unordered_set<string> us;
    
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    
    for (int i = 0; i < str1.size(); i++)
    {
        s = str1.substr(i, 2);
            
        if (isalpha(s[0]) && isalpha(s[1]))
        {
            m1[s]++;
            us.insert(s);
        }
    }
    for (int i = 0; i < str2.size(); i++)
    {
        s = str2.substr(i, 2);
            
        if (isalpha(s[0]) && isalpha(s[1]))
        {
            m2[s]++;
            us.insert(s);
        }
    }
    if (m1.empty() && m2.empty())
    {
        return N;
    }
    
    int inter = 0;
    int uni = 0;
    
    for (string s : us)
    {
        inter += min(m1[s], m2[s]);
        uni += max(m1[s], m2[s]);
    }
    answer = double(inter) / double(uni) * N;
    
    return answer;
}

int main() {
    string str1 = "FRANCE";
    string str2 = "french";
    cout << solution(str1, str2) << "\n";
}