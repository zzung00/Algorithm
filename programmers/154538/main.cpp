#include <string>
#include <vector>
#include <iostream>
#include <queue>

using namespace std;

int solution(int x, int y, int n) {
    int answer = -1;
    queue<pair<int, int>> q;
    q.push({y, 0});
    
    while (!q.empty())
    {
        int num = q.front().first;
        int cnt = q.front().second;
        q.pop();
        
        if (num == x)
        {
            answer = cnt;
            return answer;
        }
        if (num % 2 == 0)
        {
            q.push({num / 2, cnt + 1});
        }
        if (num % 3 == 0)
        {
            q.push({num / 3, cnt + 1});
        }
        if (num - n > 0)
        {
            q.push({num - n, cnt + 1});
        }
    }
    return answer;
}

int main() {
    int x = 10;
    int y = 40;
    int n = 5;
    cout << solution(x, y, n) << "\n";
}