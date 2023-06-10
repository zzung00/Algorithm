#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    answer = arr;

    return answer;
}

int main() 
{
    vector<int> arr = {7, 7, 7, 7, 7};
    vector<int> answer = solution(arr);

    for (int i : answer)
    {
        cout << i << " ";
    }

    return 0;
}