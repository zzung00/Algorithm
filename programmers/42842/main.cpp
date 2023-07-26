#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int width, height;
    int area = brown + yellow;
    
    for (height = 3; height <= sqrt(area); height++)
    {
        if (area % height == 0)
        {
            width = area / height;
        }
        if (yellow == (width - 2) * (height - 2))
        {
            answer.push_back(width);
            answer.push_back(height);
            break;
        }
    }
    
    return answer;
}

int main() {
    int brown = 10;
    int yellow = 2;
    vector<int> result = solution(brown, yellow);

    for (int i : result)
    {
        cout << i << " ";
    }
    cout << "\n";
}