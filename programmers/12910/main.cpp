#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    sort(arr.begin(), arr.end());
    
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % divisor == 0) {
            answer.push_back(arr[i]);
        }
    }
    if(answer.size() == 0) {
        answer.push_back(-1);
    }
    
    return answer;
}

int main() {
    vector<int> arr = {5, 9, 7, 10};
    int divisor = 5;
    vector<int> result = solution(arr, divisor);

    for (int i : result)
    {
        cout << i << "\n";
    }
    
}