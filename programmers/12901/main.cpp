#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector<int> month = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<string> day = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};
    int sum = b;
    
    for (int i = 0; i < a-1; i++)
    {
        sum += month[i];
    }
    answer = day[sum % 7];
    
    return answer;
}

int main() {
    int a = 5;
    int b = 24;
    cout << solution(a, b) << "\n";
}