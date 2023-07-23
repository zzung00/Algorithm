#include <string>
#include <vector>
#include <iostream>
#include <bitset>
#include <algorithm>

using namespace std;

int solution(int n) {
    int answer = 0;
    int i = 1;
    int cnt_n, cnt_ans;
    
    while (n)
    {
        answer = n + i;
        
        cnt_n = bitset<20> (n).count();
        cnt_ans = bitset<20> (answer).count();
        
        if (cnt_n == cnt_ans)
        {
            break;
        }
        else
        {
            i++;
        }
    }
    return answer;
}

int main() {
    int n = 78;
    cout << solution(n) << "\n";
}