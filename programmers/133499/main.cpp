#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    for (int i = 0; i < babbling.size(); i++)
    {
        string tmp1 = "";
        string tmp2 = "";
        
        for (char s : babbling[i])
        {
            tmp1 += s;
            
            if (tmp1 == "aya" || tmp1 == "ye" || tmp1 == "woo" || tmp1 == "ma")
            {
                if (tmp1 == tmp2)
                {
                    break;
                }
                tmp2 = tmp1;
                tmp1 = "";
            }
        }
        if (tmp1.empty())
        {
            answer++;
        }
    }
    return answer;
}

int main() {
    vector<string> babbling = {"aya", "yee", "u", "maa"};
    cout << solution(babbling) << "\n";
}