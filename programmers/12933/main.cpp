#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string str = to_string(n);
    
    sort(str.rbegin(), str.rend());
    answer = stol(str);
        
    return answer;
}

int main() {
    long long n = 118372;
    cout << solution(n) << "\n";
}