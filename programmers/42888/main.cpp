#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <map>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    vector<string> stat;
    map<string, string> m;
    
    for (string r : record)
    {
        string status, uid, name;
        stringstream ss;
        ss.str(r);
        ss >> status >> uid >> name;
        
        if (status == "Enter")
        {
            stat.push_back("님이 들어왔습니다.");
            answer.push_back(uid);
            m[uid] = name;
        }
        else if (status == "Leave")
        {
            stat.push_back("님이 나갔습니다.");
            answer.push_back(uid);
        }
        else
        {
            m[uid] = name;
        }
    }
    for (int i = 0; i < answer.size(); i++)
    {
        answer[i] = m[answer[i]] + stat[i];
    }
    return answer;
}

int main() {
    vector<string> record = {"Enter uid1234 Muzi", "Enter uid4567 Prodo","Leave uid1234","Enter uid1234 Prodo","Change uid4567 Ryan"};
    vector<string> result = solution(record);

    for (string s : result)
    {
        cout << s << " ";
    }
    cout << "\n";
}