#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

int solution(string word) {
    int answer = 0;
    map<char, int> alphabet;
    vector<int> increase = {781, 156, 31, 6, 1};
    
    alphabet.insert({'A', 0});
    alphabet.insert({'E', 1});
    alphabet.insert({'I', 2});
    alphabet.insert({'O', 3});
    alphabet.insert({'U', 4});
    
    int i = 0;
    
    for (auto w : word)
    {
        answer += 1 + alphabet[w] * increase[i];
        i++;
    }
    return answer;
}

int main() {
    string word = "AAAAE";
    cout << solution(word) << "\n";
}