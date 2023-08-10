#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    
    for (int i = 0; i < arr1.size(); i++)
    {
        vector<int> v;
        
        for (int j = 0; j < arr2[0].size(); j++)
        {
            int sum = 0;
            
            for (int k = 0; k < arr2.size(); k++)
            {
                sum += (arr1[i][k] * arr2[k][j]);
            }
            v.push_back(sum);
        }
        answer.push_back(v);
    }
    
    return answer;
}

int main() {
    vector<vector<int>> arr1 = {{1, 4}, {3, 2}, {4, 1}};
    vector<vector<int>> arr2 = {{3, 3}, {3, 3}};
    vector<vector<int>> result = solution(arr1, arr2);

    for (auto r : result)
    {
        for (auto i : r)
        {
            cout << i << " ";
        }
    }
    cout << "\n";
}