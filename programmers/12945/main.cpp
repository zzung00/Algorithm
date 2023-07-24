#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    int fibo[100001];
    
    fibo[0] = 0;
    fibo[1] = 1;
    
    for (int i = 2; i <= n; i++)
    {
        fibo[i] = (fibo[i - 1] + fibo[i - 2]) % 1234567;
    }
    answer = fibo[n];
    
    return answer;
}

int main() {
    int n = 3;
    cout << solution(n) << "\n";
}