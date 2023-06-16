#include <string>
#include <vector>
#include <numeric>
#include <iostream>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    
    answer = accumulate(arr.begin(), arr.end(), 0.0) / arr.size();
    
    return answer;
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    cout << solution(arr) << "\n";
}