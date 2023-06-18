#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min = min_element(arr.begin(), arr.end()) - arr.begin();
    
    arr.erase(arr.begin() + min);
    
    if (arr.empty())
    {
        answer.push_back(-1);
    }
    else
    {
        answer = arr;
    }
    
    return answer;
}

int main() {
    vector<int> arr = {4, 3, 2, 1};
    vector<int> result = solution(arr);

    for (int i : result)
    {
        cout << i << " ";
    }
    cout << "\n";
}