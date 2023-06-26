#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    vector<int> rank = {6, 6, 5, 4, 3, 2, 1};
    int zero = 0;
    int cnt = 0;
    
    zero = count(lottos.begin(), lottos.end(), 0);
    
    for (int i = 0; i < win_nums.size(); i++)
    {
        if (find(lottos.begin(), lottos.end(), win_nums[i]) != lottos.end())
        {
            cnt++; 
        }
    }
    answer.push_back(rank[zero + cnt]);
    answer.push_back(rank[cnt]);
    
    return answer;
}

int main() {
    vector<int> lottos = {44, 1, 0, 0, 31, 25};
    vector<int> win_nums = {31, 10, 45, 1, 6, 19};
    vector<int> result = solution(lottos, win_nums);

    for (int i : result)
    {
        cout << i << " ";
    }
    cout << "\n";
}