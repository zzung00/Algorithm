#include <string>
#include <vector>
#include <iostream>
#include <numeric>

using namespace std;

int solution(vector<int> arr) {
    int answer = arr[0];
    int GCD, LCM;
    
    for (int i = 1; i < arr.size(); i++)
    {
        GCD = gcd(answer, arr[i]);
        LCM = (answer * arr[i]) / GCD;
        answer = LCM;
    }
    return answer;
}

int main() {
    vector<int> arr = {2, 6, 8, 14};
    cout << solution(arr) << "\n";
}