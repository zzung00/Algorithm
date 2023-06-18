#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    if (sqrt(n) == (int)sqrt(n))
    {
        answer = pow(sqrt(n) + 1, 2);
    }
    else
    {
        answer = -1;
    }
    return answer;
}

int main() {
    long long n = 121;
    cout << solution(n) << "\n";
}