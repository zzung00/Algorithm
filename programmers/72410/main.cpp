#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <regex>

using namespace std;

string solution(string new_id) {
    string answer = "";
    
    transform(new_id.begin(), new_id.end(), new_id.begin(), ::tolower); // 1단계
    new_id = regex_replace(new_id, regex("[^a-z0-9-_.]+"), ""); // 2단계
    new_id = regex_replace(new_id, regex("[.]+"), "."); // 3단계
    
    if (new_id[0] == '.') // 4단계
    {
        new_id.erase(new_id.begin());
    }
    if (new_id[new_id.size() - 1] == '.')
    {
        new_id.erase(new_id.end() - 1);
    }
    if (new_id.empty()) // 5단계
    {
        new_id = "a";
    }
    if (new_id.size() >= 16) // 6단계
    {
        new_id = new_id.substr(0, 15);
        
        if (new_id.back() == '.')
        {
            new_id.pop_back();
        }
    }
    while (new_id.size() <= 2) // 7단계
    {
        new_id.push_back(new_id.back());
    }
    answer = new_id;
    
    return answer;
}

int main() {
    string new_id = "abcdefghijklmn.p";
    cout << solution(new_id) << "\n";
}