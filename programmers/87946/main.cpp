#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int answer = 0;
bool visited[8] = {0};

int dfs(int cnt, int k, vector<vector<int>> dungeons) {
    
    answer = max(cnt, answer);
    
    for (int i = 0; i < dungeons.size(); i++)
    {
        if (!visited[i] && dungeons[i][0] <= k)
        {
            visited[i] = true;
            dfs(cnt + 1, k - dungeons[i][1], dungeons);
            visited[i] = false;
        }
    }
    return answer;
}

int main() {
    int k = 80;
    vector<vector<int>> dungeons = {{80, 20}, {50, 40}, {30, 10}};
    int result = dfs(0, k, dungeons);

    cout << result << "\n";
}