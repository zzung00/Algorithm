#include <string>
#include <vector>
#include <iostream>

using namespace std;

int answer = 0;

int dfs(vector<int> numbers, int target, int idx, int sum) {
    
    if (numbers.size() == idx)
    {
        if (sum == target)
        {
            answer++;
        }
        return 0;
    }
    dfs(numbers, target, idx + 1, sum + numbers[idx]);
    dfs(numbers, target, idx + 1, sum - numbers[idx]);

    return answer;
}

int main() {
    vector<int> numbers = {1, 1, 1, 1, 1};
    int target = 3;
    int result = dfs(numbers, target, 0, 0);
    cout << result << "\n";
}