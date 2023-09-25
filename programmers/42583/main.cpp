#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int sum = 0;
    int i = 0;
    queue<int> q;
    
    while (1)
    {        
        if (i == truck_weights.size())
        {
            answer += bridge_length;
            break;
        }
        if (q.size() == bridge_length)
        {
            sum -= q.front();
            q.pop();
        }
        
        int truck = truck_weights[i];
        
        if (truck + sum <= weight)
        {
            q.push(truck);
            sum += truck;
            i++;
        }
        else
        {
            q.push(0);
        }
        answer++;
    }
    return answer;
}

int main() {
    int bridge_length = 2;
    int weight = 10;
    vector<int> truck_weights = {7, 4, 5, 6};
    cout << solution(bridge_length, weight, truck_weights) << "\n";
}