#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    int left = 10;
    int right = 12;
    
    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7)
        {
            answer += "L";
            left = numbers[i];
        }
        else if (numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9)
        {
            answer += "R";
            right = numbers[i];
        }
        else
        {
            if (numbers[i] == 0)
            {
                numbers[i] = 11;
            }
            int left_len = (abs(numbers[i] - left) / 3) + (abs(numbers[i] - left) % 3);
            int right_len = (abs(numbers[i] - right) / 3) + (abs(numbers[i] - right) % 3);
            
            if (left_len > right_len)
            {
                answer += "R";
                right = numbers[i];
            }
            else if (left_len < right_len)
            {
                answer += "L";
                left = numbers[i];
            }
            else
            {
                if (hand == "left")
                {
                    answer += "L";
                    left = numbers[i];
                }
                else
                {
                    answer += "R";
                    right = numbers[i];
                }
            }
        }
    }
    return answer;
}

int main() {
    vector<int> numbers = {1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5};
    string hand = "right";
    cout << solution(numbers, hand) << "\n";
}