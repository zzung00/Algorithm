#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    vector<int> v;
    
    for (int i = 0; i < 3; i++)
    {
        v.push_back(1);
    }
    for (int i = 0; i < number.size() - 3; i++)
    {
        v.push_back(0);
    }
    sort(v.begin(), v.end());
    
    do {
        int sum = 0;
        
        for (int i = 0; i < v.size(); i++)
        {            
            if (v[i] == 1)
            {
                sum += number[i];
            }
        }
        if (sum == 0)
        {
            answer++;
        }
    }while(next_permutation(v.begin(), v.end())); 
    
    return answer;
}

int main() {
    vector<int> number = {-2, 3, 0, 2, -5};
    cout << solution(number) << "\n";
}