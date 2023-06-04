#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "Kim";
    int idx;

    idx = find(seoul.begin(), seoul.end(), answer) - seoul.begin();
    answer = "김서방은 " + to_string(idx) + "에 있다";
    
    return answer;
}

int main() {
    vector<string> seoul = {"Jane", "Kim"};
    cout << solution(seoul) << "\n";
}