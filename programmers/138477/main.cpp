#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> v;
    
    for (int i = 0; i < score.size(); i++)
    {
        v.push_back(score[i]);
        sort(v.begin(), v.end());
        
        if (v.size() > k)
        {
            v.erase(v.begin());
        }
        answer.push_back(*v.begin());
    }
    
    return answer;
}

int main() {
    int k = 3;
    vector<int> score = {10, 100, 20, 150, 1, 100, 200};
    vector<int> result = solution(k, score);

    for (int i : result)
    {
        cout << i << " ";
    }
    cout << "\n";
}