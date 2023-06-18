#include <iostream>
#include <string>
#include <numeric>
#include <iostream>

using namespace std;

int solution(int n)
{
    int answer = 0;
    string str = to_string(n);
    
    for (int i = 0; i < str.size(); i++)
    {
        answer += str[i] - '0';
    }
    return answer;
}

int main() {
    int n = 123;
    cout << solution(n) << "\n";
}