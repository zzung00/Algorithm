#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

vector<int> solution(string msg) {
    vector<int> answer;
    map<string, int> alphabet;
    int n = 1;
    
    for (char c = 'A'; c <= 'Z'; c++)
    {
        string s = "";
        s += c;
        alphabet[s] = n++;
    }
    string tmp = "";
    
    for (int i = 0; i < msg.size(); i++)
    {
        tmp += msg[i];
        
        if (alphabet.find(tmp) == alphabet.end())
        {
            alphabet[tmp] = n++;
            tmp = tmp.substr(0, tmp.size() - 1);
            answer.push_back(alphabet[tmp]);
            tmp = "";
            i--;
        }
    }
    answer.push_back(alphabet[tmp]);
    
    return answer;
}

int main() {
    string msg = "KAKAO";
    vector<int> result = solution(msg);

    for (int i : result)
    {
        cout << i << " ";
    }
    cout << "\n";
}