#include <string>
#include <vector>
#include <iostream>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> pq(scoville.begin(), scoville.end());
    
    while (pq.top() < K && pq.size() > 1)
    {
        int nm = 0;
        
        int n = pq.top();
        pq.pop();
        int m = pq.top();
        pq.pop();
        
        nm += n + (m * 2);
        pq.push(nm);
        answer++;
    }
    if (pq.top() < K)
    {
        answer = -1;
    }
    return answer;
}

int main() {
    vector<int> scoville = {1, 2, 3, 9, 10, 12};
    int K = 7;
    cout << solution(scoville, K) << "\n";
}