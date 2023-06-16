#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long n = num;
    
    while (n != 1)
    {
        if (n == 1)
        {
            break;
        }
        if (n % 2 == 0)
        {
            n /= 2;
            answer++;
        }
        else if (n % 2 != 0)
        {
            n = (n * 3) + 1;
            answer++;
        }
        if (answer >= 500)
        {
            answer = -1;
            break;
        }
    }
    
    return answer;
}

int main() {
    int num = 6;
    cout << solution(num) << "\n";
}