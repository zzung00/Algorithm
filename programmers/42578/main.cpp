#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = -1;
    int total = 1;
    unordered_map<string, int> closet;
    
    for (int i = 0; i < clothes.size(); i++)
    {
        closet[clothes[i][1]]++;
    }
    for (auto i : closet)
    {        
        total *= (i.second + 1);
    }
    answer = total - 1;
    
    return answer;
}

int main() {
    vector<vector<string>> clothes = {{"yellow_hat", "headgear"}, {"blue_sunglasses", "eyewear"}, {"green_turban", "headgear"}};
    cout << solution(clothes) << "\n";
}