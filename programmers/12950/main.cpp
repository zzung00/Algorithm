#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    vector<int> v;

    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = 0; j < arr1[i].size(); j++)
        {
            v.push_back(arr1[i][j] + arr2[i][j]);
        }
        answer.push_back(v);
        v.clear();
    }
    return answer;
}

int main() {
    vector<vector<int>> arr1 = {{1, 2}, {2, 3}};
    vector<vector<int>> arr2 = {{3, 4}, {5, 6}};
    vector<vector<int>> result = solution(arr1, arr2);

    for (auto v : result)
    {
        for (auto i : v)
        {
            cout << i << " ";
        }
        
    }
    cout << "\n";
}