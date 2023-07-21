#include <string>
#include <vector>
#include <iostream>
#include <bitset>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int change = 0;
    int zero = 0;
    
    while (s != "1")
    {
        string str = "";
        change++;
        
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                zero++;
            }
            else
            {
                str += s[i];
            }
        }
        str = bitset<32> (str.size()).to_string();
        s = str.substr(str.find_first_not_of('0'));
    }
    answer.push_back(change);
    answer.push_back(zero);
    
    return answer;
}

int main() {
    string s = "110010101001";
    vector<int> result = solution(s);

    for (int i : result)
    {
        cout << i << " ";
    }
    cout << "\n";
}