#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    map<char, int> m;
    vector<int> num = {0, 3, 2, 1, 0, 1, 2, 3};
    
    for (int i = 0; i < survey.size(); i++)
    {
        string str = survey[i];
        int n = choices[i];
        
        m[str[n / 4]] += num[n];
    }
    answer += m['R'] >= m['T'] ? 'R' : 'T';
    answer += m['C'] >= m['F'] ? 'C' : 'F';
    answer += m['J'] >= m['M'] ? 'J' : 'M';
    answer += m['A'] >= m['N'] ? 'A' : 'N';
    
    return answer;
}

int main() {
    vector<string> survey = {"AN", "CF", "MJ", "RT", "NA"};
    vector<int> choices = {5, 3, 2, 7, 5};
    cout << solution(survey, choices) << "\n";
}