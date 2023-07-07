#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    vector<int> v;
    vector<int> cnt;
    
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                v.push_back(j);
                if (i / j != j)
                {
                    v.push_back(i / j);
                }
            }
        }
        cnt.push_back(v.size());
        v.clear();
    }
    
    for (int i = 0; i < cnt.size(); i++)
    {
        if (cnt[i] > limit)
        {
            cnt[i] = power;
        }
        answer += cnt[i];
    }
    
    return answer;
}

int main() {
    int number = 5;
    int limit = 3;
    int power = 2;
    cout << solution(number, limit, power) << "\n";
}