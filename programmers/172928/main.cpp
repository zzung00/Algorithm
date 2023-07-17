#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    pair<int, int> start;
    
    int h = park.size();
    int w = park[0].size();
    
    for (int i = 0; i < park.size(); i++)
    {
        for (int j = 0; j < park[i].size(); j++)
        {
            if (park[i][j] == 'S')
            {
                start = make_pair(i, j);
                break;
            }
        }
    }

    for (auto route : routes)
    {
        pair<int, int> tmp = start;
        char c = route[0];
        int n = route[2] - '0';
        
        for (int i = 0; i < n; i++)
        {
            switch(c)
            {
                case 'N' : start.first -= 1; break;
                case 'S' : start.first += 1; break;
                case 'W' : start.second -= 1; break;
                case 'E' : start.second += 1; break;
            }
            if ((start.first < 0 || start.second < 0 || start.first >= h || start.second >= w) || park[start.first][start.second] == 'X')
            {
                start = tmp;
                break;
            }
        }
    }
    answer.push_back(start.first);
    answer.push_back(start.second);
    
    return answer;
}

int main() {
    vector<string> park = {"SOO","OOO","OOO"};
    vector<string> routes = {"E 2","S 2","W 1"};
    vector<int> result = solution(park, routes);

    for (auto i : result)
    {
        cout << i << " ";
    }
    cout << "\n";
}