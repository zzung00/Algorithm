#include <string>
#include <vector>
#include <iostream>

using namespace std;

void dfs(int x, int y, int size, vector<int>& answer, vector<vector<int>>& arr) {
    bool zero = true;
    bool one = true;
    
    for (int i = x; i < x + size; i++)
    {
        for (int j = y; j < y + size; j++)
        {
            if (arr[i][j] == 0) one = false;
            if (arr[i][j] == 1) zero = false;
        }
    }
    if (zero == true)
    {
        answer[0]++;
        return;
    }
    if (one == true)
    {
        answer[1]++;
        return;
    }
    dfs(x, y, size / 2, answer, arr);
    dfs(x, y + size / 2, size / 2, answer, arr);
    dfs(x + size / 2, y, size / 2, answer, arr);
    dfs(x + size / 2, y + size / 2, size / 2, answer, arr);
}

vector<int> solution(vector<vector<int>> arr) {
    vector<int> answer(2, 0);
    dfs(0, 0, arr.size(), answer, arr);
    return answer;
}

int main() {
    vector<vector<int>> arr = {{1,1,0,0},{1,0,0,0},{1,0,0,1},{1,1,1,1}};
    vector<int> result = solution(arr);

    for (int r : result)
    {
        cout << r << " ";
    }
    cout << "\n";
}