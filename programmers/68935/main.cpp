#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> v;
    int m = 1;
    
    while (n != 0) 
    {
        v.push_back(n % 3);
        n /= 3;
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        answer += (v[i] * m);
        m *= 3;
    }
    
    return answer;
}

int main() {
    int n = 45;
    cout << solution(n) << "\n";
}