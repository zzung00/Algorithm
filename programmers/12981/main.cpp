#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer(2);
    map<string, int> m;
    
    m[words[0]]++;
    
    for (int i = 1; i < words.size(); i++)
    {
        if (words[i - 1].back() != words[i].front() || m[words[i]])
        {
            answer[0] = (i % n) + 1;
            answer[1] = (i / n) + 1;
            break;
        }
        m[words[i]]++;
    }
    return answer;
}

int main() {
    int n = 3;
    vector<string> words = {"tank", "kick", "know", "wheel", "land", "dream", "mother", "robot", "tank"};
    vector<int> result = solution(n, words);

    for (int i : result)
    {
        cout << i << " ";
    }
    cout << "\n";
}