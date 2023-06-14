#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool isPrime(int n) {
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int solution(vector<int> nums) {
    int answer = 0;
    vector<bool> check(nums.size());
    fill(check.end() - 3, check.end(), true);

    do
    {
        int n = 0;

        for (int i = 0; i < check.size(); i++)
        {
            if (check[i])
            {
                n += nums[i];
            }
            
        }
        if (isPrime(n))
        {
            answer++;
        }
        
    } while (next_permutation(check.begin(), check.end()));

    return answer;
}

int main() {
    vector<int> nums = {1, 2, 7, 6, 4};
    cout << solution(nums) << "\n";
}