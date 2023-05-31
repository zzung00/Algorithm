#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;

    if (n == 0)
    {
        answer = n;
    }

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            answer += i;
        }
        
    }

    return answer;
}

int main() {
    int n = 16;
    cout << solution(n) << "\n";
}