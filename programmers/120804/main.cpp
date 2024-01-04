#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    answer = num1 * num2;
    return answer;
}

int main() {
    cout << solution(3, 4) << "\n";
}