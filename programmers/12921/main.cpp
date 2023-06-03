#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<bool> prime(n+1, true);
    
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == true)
        {
            for (int j = 2; i*j <= n; j++)
            {
                prime[i*j] = false;
            }
            answer++;
        }
        
    }
    
    return answer;
}

int main() {
    int n = 5;
    cout << solution(n) << "\n";
}