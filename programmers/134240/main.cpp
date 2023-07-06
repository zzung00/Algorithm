#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string str = "";
    
    for (int i = 1; i < food.size(); i++)
    {
        for (int j = 0; j < food[i] / 2; j++)
        {
            answer += to_string(i);
            str = answer;
        }
    }
    answer += '0';
    reverse(str.begin(), str.end());
    answer += str;
    
    return answer;
}

int main() {
    vector<int> food = {1, 3, 4, 6};
    cout << solution(food) << "\n";
}