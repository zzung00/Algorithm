#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int n) {
    string answer = "";
    vector<string> v = {"4", "1", "2"};
    
    while (n)
    {
        answer = v[n % 3] + answer;
        
        if (n % 3 == 0)
        {
            n = n / 3 - 1;
        }
        else
        {
            n /= 3;
        }
    }
    return answer;
}

int main() {
    int n = 1;
    cout << solution(n) << "\n";
}