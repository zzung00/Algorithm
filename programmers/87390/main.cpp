#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    
    for (long long i = left; i <= right; i++)
    {
        int row = i / n;
        int col = i % n;
        
        answer.push_back(max(row, col) + 1);
    }
    
    return answer;
}

int main() {
    int n = 3;
    long long left = 2;
    long long right = 5;
    vector<int> result = solution(n, left, right);

    for (int i : result)
    {
        cout << i << " "; 
    }
    cout << "\n";
}