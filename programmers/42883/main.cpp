#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    int n = number.size() - k;
    int idx = -1;
    
    for (int i = 0; i < n; i++)
    {
        char max = ' ';
        
        for (int j = idx + 1; j <= k + i; j++)
        {
            if (max < number[j])
            {
                max = number[j];
                idx = j;
            }
        }
        answer += max;
    }
    return answer;
}

int main() {
    string number = "1924";
    int k = 2;
    cout << solution(number, k) << "\n";
}