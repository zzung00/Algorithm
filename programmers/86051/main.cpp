#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 45;
    
    for (int i = 0; i < numbers.size(); i++)
    {
        answer -= numbers[i];
    }
    
    return answer;
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 6, 7, 8, 0};
    cout << solution(numbers) << "\n";
}