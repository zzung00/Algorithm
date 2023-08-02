#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <iostream>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    int cnt = 0;
    vector<int> v;
    unordered_map<int, int> m;
    
    for (int i : tangerine)
    {
        m[i]++;
    }
    for (auto i : m)
    {
        v.push_back(i.second);
    }
    sort(v.rbegin(), v.rend());
    
    for (int i = 0; i < v.size(); i++)
    {
        if (cnt >= k)
        {
            break;
        }
        answer++;
        cnt += v[i];
    }
    return answer;
}

int main() {
    int k = 6;
    vector<int> tangerine = {1, 3, 2, 5, 4, 5, 2, 3};
    cout << solution(k, tangerine) << "\n";
}