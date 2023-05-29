#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer(players.size());
    unordered_map<string, int> m;

    for (int i = 0; i < players.size(); i++)
    {
        m[players[i]] = i;
    }
    
    for (string& call : callings)
    {
        int idx = m[call];
        string p = players[idx - 1];
        m[p]++;
        m[call]--;
        players[idx - 1] = call;
        players[idx] = p;
    }
    answer = players;

    return answer;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<string> players = {"mumu", "soe", "poe", "kai", "mine"};
    vector<string> callings = {"kai", "kai", "mine", "mine"};
    vector<string> result = solution(players, callings);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    
    return 0;
}