#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int height = 0;
    int width = 0;

    for (int i = 0; i < sizes.size(); i++)
    {
        if (sizes[i][0] > sizes[i][1])
        {
            height = max(height, sizes[i][0]);
            width = max(width, sizes[i][1]);
        }
        else
        {
            height = max(height, sizes[i][1]);
            width = max(width, sizes[i][0]);
        }
    }
    answer = height * width;
    
    return answer;
}

int main() {
    vector<vector<int>> sizes = {{60, 50}, {30, 70}, {60, 30}, {80, 40}};
    cout << solution(sizes) << "\n";
}