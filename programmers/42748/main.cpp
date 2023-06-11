#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> v;

    for (vector<int> i : commands)
    {
        v.clear();
        v.assign(array.begin() + (i[0] - 1), array.begin() + i[1]);
        sort(v.begin(), v.end());
        answer.push_back(v[i[2] - 1]);
    }
    
    return answer;
}

int main() {
    vector<int> array = {1, 5, 2, 6, 3, 7, 4};
    vector<vector<int>> commands = {{2, 5, 3}, {4, 4, 1}, {1, 7, 3}};
    vector<int> result = solution(array, commands);

    for (int i : result)
    {
        cout << i << " ";
    }
    cout << "\n";
    
}