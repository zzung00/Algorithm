#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

int solution(vector<int> topping) {
    int answer = 0;
    unordered_map<int, int> right;
    unordered_map<int, int> left;
    
    for (int top : topping)
    {
        right[top]++;
    }
    for (int i = 0; i < topping.size(); i++)
    {
        right[topping[i]]--;
        left[topping[i]]++;
        
        if (right[topping[i]] == 0)
        {
            right.erase(topping[i]);
        }
        if (right.size() == left.size())
        {
            answer++;
        }
    }
    return answer;
}

int main() {
    vector<int> topping = {1, 2, 1, 3, 1, 4, 1, 2};
    cout << solution(topping) << "\n";
}