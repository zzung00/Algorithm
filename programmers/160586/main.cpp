#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    int max = 1000;
    vector<int> v(26, max);
    
    for (auto k : keymap)
    {
        for (int i = 0; i < k.size(); i++)
        {
            v[k[i] - 'A'] = min(v[k[i] - 'A'], i + 1);
        }
    }
    
    for (auto t : targets)
    {
        int sum = 0;
        
        for (int i = 0; i < t.size(); i++)
        {
            if (v[t[i] - 'A'] == max)
            {
                sum = -1;
                break;
            }
            sum += v[t[i] - 'A'];
        }
        answer.push_back(sum);
    }
    return answer;
}

int main() {
    vector<string> keymap = {"ABACD", "BCEFD"};
    vector<string> targets = {"ABCD","AABB"};
    vector<int> result = solution(keymap, targets);

    for (auto i : result)
    {
        cout << i << " ";
    }
    cout << "\n";
}