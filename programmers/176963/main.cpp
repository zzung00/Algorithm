#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    unordered_map<string, int> m;

    for (int i = 0; i < name.size(); i++)
    {
        m[name[i]] = yearning[i];
    }
    for (auto p : photo)
    {
        int sum = 0;

        for (auto i : p)
        {
            sum += m[i];
        }
        answer.push_back(sum);
    }
    
    return answer;
}

int main() {
    vector<string> name = {"may", "kein", "kain", "radi"};
    vector<int> yearning = {5, 10, 1, 3};
    vector<vector<string>> photo = {{"may"}, {"kein", "deny", "may"}, {"kon", "coni"}};
    vector<int> result = solution(name, yearning, photo);

    for (int i : result)
    {
        cout << i << "\n";
    } 

    return 0;
}