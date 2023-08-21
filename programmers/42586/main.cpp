#include <string>
#include <vector>
#include <iostream>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> q;
    
    for (int i = 0; i < progresses.size(); i++)
    {
        int progresse = 100 - progresses[i];
        int day = progresse % speeds[i];
        
        if (day != 0)
        {
            day = (progresse / speeds[i]) + 1;
            q.push(day);
        }
        else
        {
            day = progresse / speeds[i];
            q.push(day);
        }
    }
    while (!q.empty())
    {
        int cnt = 1;
        int now = q.front();
        q.pop();
        
        while (!q.empty() && q.front() <= now)
        {
            cnt++;
            q.pop();
        }
        answer.push_back(cnt);
    }
    return answer;
}

int main() {
    vector<int> progresses = {93, 30, 55};
    vector<int> speeds = {1, 30, 5};
    vector<int> result = solution(progresses, speeds);

    for (int i : result)
    {
        cout << i << " ";
    }
    cout << "\n";
}