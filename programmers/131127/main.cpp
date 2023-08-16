#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <unordered_map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    unordered_map<string, int> wish;
    
    for (int i = 0; i < want.size(); i++)
    {
        wish[want[i]] = number[i];
    }
    
    for (int i = 0; i <= discount.size() - 10; i++)
    {
        unordered_map<string, int> disCnt;
        
        for (int j = i; j < i + 10; j++)
        {
            disCnt[discount[j]]++;
        }
        if (wish == disCnt)
        {
            answer++;
        }
    }
    return answer;
}

int main() {
    vector<string> want = {"banana", "apple", "rice", "pork", "pot"};
    vector<int> number = {3, 2, 2, 2, 1};
    vector<string> discount = {"chicken", "apple", "apple", "banana", "rice", "apple", "pork", "banana", "pork", "rice", "pot", "banana", "apple", "banana"};

    cout << solution(want, number, discount) << "\n";
}