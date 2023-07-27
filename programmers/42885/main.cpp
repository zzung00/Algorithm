#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int idx = 0;
    
    sort(people.begin(), people.end());
    
    while (idx < people.size())
    {   
        int back = people.back();
        people.pop_back();
        
        if (people[idx] + back <= limit)
        {
            answer++;
            idx++;
        }
        else
        {
            answer++;
        }
    }
    return answer;
}

int main() {
    vector<int> people = {70, 50, 80, 50};
    int limit = 100;
    cout << solution(people, limit) << "\n";
}