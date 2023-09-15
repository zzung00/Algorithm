#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer(numbers.size(), -1);
    stack<pair<int, int>> s;
    
    for (int i = 0; i < numbers.size(); i++)
    {
        while (!s.empty())
        {
            pair<int, int> top = s.top();
            
            if (top.first >= numbers[i])
            {
                break;
            }
            answer[top.second] = numbers[i];
            s.pop();
        }
        s.push({numbers[i], i});
    }
    return answer;
}

int main() {
    vector<int> numbers = {2, 3, 3, 5};
    vector<int> result = solution(numbers);

    for (int r : result)
    {
        cout << r << " ";
    }
    cout << "\n";
}