#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

bool cmp(pair<double, int> a, pair<double, int> b) {
    if (a.first == b.first)
    {
        return a.second < b.second;
    }
    else
    {
        return a.first > b.first;
    }
} 

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    map<int, double> m;
    vector<pair<double, int>> v;
    double players = 0;
    
    for (int i = 0; i < stages.size(); i++)
    {
        m[stages[i]]++;
    }
    
    for (int i = 1; i <= N; i++)
    {
        if (m[i] == 0)
        {
            v.push_back({0, i});
            continue;
        }
        v.push_back({m[i] / (stages.size() - players), i});
        players += m[i];
    }
    sort(v.begin(), v.end(), cmp);
    
    for (auto i : v)
    {
        answer.push_back(i.second);
    }
    return answer;
}

int main() {
    int N = 5;
    vector<int> stages = {2, 1, 2, 6, 2, 4, 3, 3};
    vector<int> result = solution(N, stages);

    for (int i : result)
    {
        cout << i << " ";
    }
    cout << "\n";
}