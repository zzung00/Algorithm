#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string, int> players;
    
    for (auto p : participant)
    {
        if (players.end() == players.find(p))
        {
            players.insert(make_pair(p, 1));
        }
        else
        {
            players[p]++;
        }
    }
    
    for (auto c : completion)
    {
        players[c]--;
    }
    
    for (auto p : participant)
    {
        if (players[p] > 0)
        {
            answer = p;
            break;
        }
    }
    
    return answer;
}

int main() {
    vector<string> participant = {"mislav", "stanko", "mislav", "ana"};
    vector<string> completion = {"stanko", "ana", "mislav"};
    string result = solution(participant, completion);

    cout << result << "\n";
    
}