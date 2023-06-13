#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer(n, x);
    
    for (int i = 1; i < n; i++)
    {
        answer[i] = answer[i - 1] + x;
    }
    return answer;
}

int main() {
    int x = 2;
    int n = 5;
    vector<long long> result = solution(x, n);

    for (auto i : result)
    {
        cout << i << " ";
    }

}