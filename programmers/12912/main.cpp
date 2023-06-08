#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    
    while(answer != a || answer != b) {
        if(a == b) {
            answer = a;
        }
        else if(a < b) {
            answer += a;
            a++;
            if(a == b) {
                answer += a;
                break;
            }
        }
        else if(a > b) {
            answer += a; 
            a--;
            if(a == b) {
                answer += a;
                break;
            }
        }
    }
    return answer;
}

int main() {
    int a = 3;
    int b = 5;
    cout << solution(a, b) << "\n";
}