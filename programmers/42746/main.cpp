#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool cmp(string a, string b) {
    return a + b > b + a;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> v;
    
    for (auto number : numbers)
    {
        v.push_back(to_string(number));
    }
    sort(v.begin(), v.end(), cmp);
    
    for (auto s : v)
    {
        answer += s;
    }
    if (answer[0] == '0')
    {
        return "0";
    }
    return answer;
}

int main() {
    vector<int> numbers = {6, 10, 2};
    cout << solution(numbers) << "\n";
}