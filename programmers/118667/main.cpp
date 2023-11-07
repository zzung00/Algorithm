#include <string>
#include <vector>
#include <iostream>
#include <numeric>

using namespace std;

int s;

int addidx(int idx) {
    return idx + 1 >= 2*s ? 0 : idx + 1;
}

int solution(vector<int> queue1, vector<int> queue2) {
    int answer = 0;
    long long sum1 = accumulate(queue1.begin(), queue1.end(), 0LL);
    long long sum2 = accumulate(queue2.begin(), queue2.end(), 0LL);
    s = queue1.size();
    
    queue1.insert(queue1.end(), queue2.begin(), queue2.end());
    
    int p1_1 = 0, p1_2 = s - 1;
    int p2_1 = s, p2_2 = 2*s - 1;
    
    while (answer <= 4*s)
    {
        if (sum1 < sum2)
        {
            sum2 -= queue1[p2_1];
            sum1 += queue1[p2_1];
            p2_1 = addidx(p2_1);
            p1_2 = addidx(p1_2);
        }
        else if (sum1 > sum2)
        {
            sum1 -= queue1[p1_1];
            sum2 += queue1[p1_1];
            p1_1 = addidx(p1_1);
            p2_2 = addidx(p2_2);
        }
        else 
            return answer;
        
        answer++;
    }
    return -1;
}

int main() {
    vector<int> queue1 = {3, 2, 7, 2};
    vector<int> queue2 = {4, 6, 5, 1};
    cout << solution(queue1, queue2) << "\n";
}