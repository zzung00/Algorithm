#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> students(n + 2, 0);
    
    for (auto i : lost)
    {
        students[i]--;
    }
    for (auto i : reserve)
    {
        students[i]++;
    }
    
    for (int i = 1; i <= n; i++)
    {
        if (students[i] < 0)
        {
            if (students[i - 1] == 1)
            {
                students[i - 1]--;
                students[i]++;
            }
            else if (students[i + 1] == 1)
            {
                students[i + 1]--;
                students[i]++;
            }
        }
    }
    
    for (int i = 1; i <= n; i++)
    {
        if (students[i] >= 0)
        {
            answer++;
        }
    }
    
    return answer;
}

int main() {
    int n = 5;
    vector<int> lost = {2, 4};
    vector<int> reserve = {1, 3, 5};
    cout << solution(n, lost, reserve) << "\n";
}