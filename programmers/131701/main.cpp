#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    int len = elements.size();
    vector<int> v(elements);
    set<int> s;
    
    copy(v.begin(), v.end(), back_inserter(elements));
    
    for (int i = 0; i < len; i++)
    {
        int sum = elements[i];
        s.insert(sum);
        
        int cnt = 1;
        int end = i;
        
        while (cnt < len)
        {
            cnt++;
            end++;
            sum += elements[end];
            s.insert(sum);
        }
    }
    answer = s.size();
    
    return answer;
}

int main() {
    vector<int> elements = {7, 9, 1, 1, 4};
    cout << solution(elements) << "\n";
}