#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    int min = 0;
    int n = 0;
    
    sort(score.rbegin(), score.rend());
    
    for (int i = 0; i < (score.size() / m); i++)
    {
        min = *min_element(score.begin() + n, score.begin() + m + n);
        n += m;
        answer += min * m;
    }
    return answer;
}

int main() {
    int k = 3;
    int m = 4;
    vector<int> score = {1, 2, 3, 1, 2, 3, 1};
    cout << solution(k, m, score) << "\n";
}