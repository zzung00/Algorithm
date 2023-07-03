#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> cnt = {0, 0, 0};
    vector<int> first = {1, 2, 3, 4, 5};
    vector<int> second = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> third = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    for (int i = 0; i < answers.size(); i++)
    {
        if (answers[i] == first[i % 5])
        {
            cnt[0]++;
        }
        if (answers[i] == second[i % 8])
        {
            cnt[1]++;
        }
        if (answers[i] == third[i % 10])
        {
            cnt[2]++;
        }
    }
    int max = *max_element(cnt.begin(), cnt.end());
    
    for (int i = 0; i < 3; i++)
    {
        if (max == cnt[i])
        {
            answer.push_back(i + 1);
        }
    }
    
    return answer;
}

int main() {
    vector<int> answers = {1, 2, 3, 4, 5};
    vector<int> result = solution(answers);

    for (auto i : result)
    {
        cout << i << " ";
    }
    cout << "\n";
}