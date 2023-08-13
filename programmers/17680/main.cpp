#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    vector<string> v;
    
    if (cacheSize == 0)
    {
        answer = cities.size() * 5;
        return answer;
    }
    
    for (int i = 0; i < cities.size(); i++)
    {
        transform(cities[i].begin(), cities[i].end(), cities[i].begin(), ::tolower);
        auto it = find(v.begin(), v.end(), cities[i]);
        
        if (it != v.end())
        {
            v.erase(it);
            v.push_back(cities[i]);
            answer += 1;
        }
        else 
        {
            if (v.size() >= cacheSize)
            {
                v.erase(v.begin());
                v.push_back(cities[i]);
            }
            else
            {
                v.push_back(cities[i]);
            }
            answer += 5;
        }
    }
    
    return answer;
}

int main() {
    int cacheSize = 3;
    vector<string> cities = {"Jeju", "Pangyo", "Seoul", "NewYork", "LA", "Jeju", "Pangyo", "Seoul", "NewYork", "LA"};
    cout << solution(cacheSize, cities) << "\n";
}