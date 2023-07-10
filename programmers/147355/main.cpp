#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    string str = "";
    
    for (int i = 0; i <= t.size() - p.size(); i++)
    {
        str = t.substr(i, p.size());
        
        if (stol(str) <= stol(p))
        {
            answer++;
        }
    }
    return answer;
}

int main() {
    string t = "3141592";
    string p = "271";
    cout << solution(t, p) << "\n";
}