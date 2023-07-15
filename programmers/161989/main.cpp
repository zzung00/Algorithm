#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int max = 0;
    
    for (int i = 0; i < section.size(); i++)
    {
        if (max > section[i])
        {
            continue;
        }
        answer++;
        max = section[i] + m;
    }
    return answer;
}

int main() {
    int n = 8;
    int m = 4;
    vector<int> section = {2, 3, 6};
    cout << solution(n, m, section) << "\n";
}