#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    string str;
    vector<int> v;
    
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            str += s[i];
        }
        else
        {
            v.push_back(stoi(str));
            str.clear();
        }
    }
    v.push_back(stoi(str));
    sort(v.begin(), v.end());
    answer += to_string(v.front()) + " " + to_string(v.back());
    
    return answer;
}

int main() {
    string s = "1 2 3 4";
    cout << solution(s) << "\n";
}