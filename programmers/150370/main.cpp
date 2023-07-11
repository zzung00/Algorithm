#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <map>

using namespace std;

int changeDate(string str) {
    int year = stoi(str.substr(0, 4));
    int month = stoi(str.substr(5, 2)) - 1;
    int day = stoi(str.substr(8, 2));
    
    return (12 * 28 * year) + (month * 28) + day;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    map<char, int> m;

    int td = changeDate(today);
    
    for (auto i : terms)
    {
        stringstream str(i);
        char type;
        int num;
        str >> type >> num;
        m[type] = num;
    }

    for (int i = 0; i < privacies.size(); i++)
    {
        stringstream str(privacies[i]);
        char type;
        string date;
        str >> date >> type;
        
        int p_date = changeDate(date);
        int result = p_date + (28 * m[type]) - 1;
        
        if (result < td)
        {
            answer.push_back(i + 1);
        }
    }
    
    return answer;
}

int main() {
    string today = "2022.05.19";
    vector<string> terms = {"A 6", "B 12", "C 3"};
    vector<string> privacies = {"2021.05.02 A", "2021.07.01 B", "2022.02.19 C", "2022.02.20 C"};
    vector<int> result = solution(today, terms, privacies);

    for (auto i : result)
    {
        cout << i << " ";
    }
    cout << "\n";
}