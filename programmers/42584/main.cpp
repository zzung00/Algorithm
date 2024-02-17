#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    
    for (int i = 0; i < prices.size(); i++)
    {
        int cnt = 0;
        
        for (int j = i + 1; j < prices.size(); j++)
        {
            cnt++;
            
            if (prices[i] > prices[j])
            {
                break;
            }
        }
        answer.push_back(cnt);
    }
    
    return answer;
}

int main() {
    vector<int> prices = {1, 2, 3, 2, 3};
    vector<int> result = solution(prices);

    for (int r : result)
    {
        cout << r << " ";
    }
    cout << "\n";
}