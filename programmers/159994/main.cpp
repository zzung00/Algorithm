#include <string>
#include <vector>
#include <iostream>
#include <queue>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    bool isEqual = true;
    queue<string> c1;
    queue<string> c2;
    queue<string> g;
    
    for (auto i : cards1)
    {
        c1.push(i);
    }
    for (auto i : cards2)
    {
        c2.push(i);
    }
    for (auto i : goal)
    {
        g.push(i);
    }
    
    while (!g.empty())
    {
        if (g.front() == c1.front())
        {
            g.pop();
            c1.pop();
        }
        else if (g.front() == c2.front())
        {
            g.pop();
            c2.pop();
        }
        else 
        {
            isEqual = false;
            break;
        }
    }
    
    if (isEqual) answer = "Yes";
    else answer = "No";
    
    return answer;
}

int main() {
    vector<string> cards1 = {"i", "drink", "water"};
    vector<string> cards2 = {"want", "to"};
    vector<string> goal = {"i", "want", "to", "drink", "water"};
    cout << solution(cards1, cards2, goal) << "\n";
}