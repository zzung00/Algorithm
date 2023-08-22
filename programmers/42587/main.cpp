#include <string>
#include <vector>
#include <iostream>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    priority_queue<int> pq;
    queue<pair<int, int>> q;
        
    for (int i = 0; i < priorities.size(); i++)
    {
        q.push({priorities[i], i});
        pq.push(priorities[i]);
    }
    
    while (!pq.empty())
    {
        int num = q.front().first;
        int idx = q.front().second;
        q.pop();
        
        if (num == pq.top())
        {
            answer++;
            if (location == idx)
            {
                break;
            }
            pq.pop();
        }
        else
        {
            q.push({num, idx});
        }
    }
    return answer;
}

int main() {
    vector<int> priorities = {2, 1, 3, 2};
    int location = 2;
    cout << solution(priorities, location) << "\n";
}