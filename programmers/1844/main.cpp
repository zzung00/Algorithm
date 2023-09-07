#include <vector>
#include <iostream>
#include <queue>

using namespace std;

int solution(vector<vector<int>> maps)
{
    int answer = 0;
    int n = maps.size();
    int m = maps[0].size();
    int pos[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    int bfs[101][101] = {0};
    bool visited[101][101] = {0};
    queue<pair<int, int>> now;
    
    visited[0][0] = true;
    bfs[0][0] = 1;
    now.push({0, 0});
    
    while (!now.empty())
    {
        int posX = now.front().first;
        int posY = now.front().second;
        now.pop();
        
        for (int i = 0; i < 4; i++)
        {
            int nx = posX + pos[i][0];
            int ny = posY + pos[i][1];
            
            if (nx >= n || nx < 0 || ny >= m || ny < 0) continue;
            if (visited[nx][ny]) continue;
            if (maps[nx][ny] == 0) continue;
            
            visited[nx][ny] = true;
            now.push({nx, ny});
            bfs[nx][ny] = bfs[posX][posY] + 1;
        }
    }
    if (!bfs[n-1][m-1])
    {
        answer = -1;
    }
    else
    {
        answer = bfs[n-1][m-1];
    }
    return answer;
}

int main() {
    vector<vector<int>> maps = {{1,0,1,1,1},{1,0,1,0,1},{1,0,1,1,1},{1,1,1,0,1},{0,0,0,0,1}};
    cout << solution(maps) << "\n";
}