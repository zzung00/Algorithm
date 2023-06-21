#include <string>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <sstream>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer(id_list.size(), 0);
    map<string, int> id_map;
    map<string, set<string>> report_map;
    
    for (int i = 0; i < id_list.size(); i++)
    {
        id_map[id_list[i]] = i;
    }
    for (auto i : report)
    {
        stringstream ss(i);
        string from, to;
        ss >> from >> to;
        report_map[to].insert(from);
    }
    for (auto i : report_map)
    {
        if (k <= i.second.size())
        {
            for (auto j : i.second)
            {
                answer[id_map[j]]++;
            }
            
        }
        
    }
    
    return answer;
}

int main() {
    vector<string> id_list = {"muzi", "frodo", "apeach", "neo"};
    vector<string> report = {"muzi frodo", "apeach frodo", "frodo neo", "muzi neo", "apeach muzi"};
    int k = 2;
    vector<int> result = solution(id_list, report, k);

    for (int i : result)
    {
        cout << i << " ";
    }
    cout << "\n";
}