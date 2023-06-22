#include <string>
#include <vector>
#include <map>
#include <cctype>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
    map<string, string> m;
    
    m["zero"] = "0";
    m["one"] = "1";
    m["two"] = "2";
    m["three"] = "3";
    m["four"] = "4";
    m["five"] = "5";
    m["six"] = "6";
    m["seven"] = "7";
    m["eight"] = "8";
    m["nine"] = "9";
    
    string str = "";
    string tmp = "";
    
    for (auto i : s)
    {
        if (isdigit(i))
        {
            str += i;
        }
        else
        {
            tmp += i;
            if (m.find(tmp) != m.end())
            {
                str += m[tmp];
                tmp = "";
            }
        }
    }
    answer = stoi(str);
    
    return answer;
}

int main() {
    string s = "one4seveneight";
    cout << solution(s) << "\n";
}