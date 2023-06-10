#include <vector>
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    set<int> s(nums.begin(), nums.end());
    
    answer = min(s.size(), nums.size() / 2);

    return answer;
}

int main() 
{
    vector<int> nums = {3, 1, 2, 3};
    cout << solution(nums) << "\n";
}