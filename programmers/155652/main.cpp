#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    
    for (int i = 0; i < skip.size(); i++)
    {
        alphabet.erase(find(alphabet.begin(), alphabet.end(), skip[i]));
    }
    for (int i = 0; i < s.size(); i++)
    {
        int idx = alphabet.find(s[i]) + index;
        
        while (idx >= alphabet.size())
        {
            idx -= alphabet.size();
        }
        answer += alphabet[idx];
    }
    return answer;
}

int main() {
    string s = "aukks";
    string skip = "wbqd";
    int index = 5;
    cout << solution(s, skip, index) << "\n";
}