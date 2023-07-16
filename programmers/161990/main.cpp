#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer = {51, 51, 0, 0};
    
    for (int i = 0; i < wallpaper.size(); i++)
    {
        for (int j = 0; j < wallpaper[i].size(); j++)
        {
            if (wallpaper[i][j] == '#')
            {
                answer[0] = min(answer[0], i);
                answer[1] = min(answer[1], j);
                answer[2] = max(answer[2], i + 1);
                answer[3] = max(answer[3], j + 1);
            }
        }
    }    
    return answer;
}

int main() {
    vector<string> wallpaper = {".#...", "..#..", "...#."};
    vector<int> result = solution(wallpaper);

    for (auto i : result)
    {
        cout << i << " ";
    }
    cout << "\n";
}