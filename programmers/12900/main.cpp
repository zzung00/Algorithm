#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    int tile[60001];
    tile[0] = 0;
    tile[1] = 1;
    tile[2] = 2;
    tile[3] = 3;
    
    for (int i = 4; i <= n; i++)
    {
        tile[i] = (tile[i - 1] + tile[i - 2]) % 1000000007;
    }
    answer = tile[n] % 1000000007;
    
    return answer;
}

int main() {
    int n = 4;
    cout << solution(n) << "\n";
}