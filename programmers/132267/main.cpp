#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    
    while (n >= a)
    {
        answer += (n / a) * b;
        n = ((n / a) * b) + (n % a);
    }
    return answer;
}

int main() {
    int a = 2;
    int b = 1;
    int n = 20;
    cout << solution(a, b, n) << "\n";
}