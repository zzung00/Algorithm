#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int sum = 0;
    string str = to_string(x);
    
    for (int i = 0; i < str.size(); i++)
    {
        sum += str[i] - '0';
    }
    if (x % sum != 0)
    {
        answer = false;
    }
    
    return answer;
}

int main() {
    int x = 10;
    cout << solution(x) << "\n";
}