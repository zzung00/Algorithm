#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<long long> solution(vector<long long> numbers) {
    vector<long long> answer;
    
    for (auto number : numbers)
    {
        if (number % 2 == 0)
        {
            answer.push_back(number + 1);
        }
        else
        {
            long long bit = 1;
            
            while (true)
            {
                if ((number & bit) == 0) break;
                bit *= 2;
            }
            bit /= 2;
            answer.push_back(number + bit);
        }
    }
    return answer;
}

int main() {
    vector<long long> numbers = {2, 7};
    vector<long long> result = solution(numbers);

    for (auto r : result)
    {
        cout << r << " ";
    }
    cout << "\n";
}