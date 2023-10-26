#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int solution(string numbers) {
    int answer = 0;
    vector<char> v;
    vector<int> num;
    
    for (auto number : numbers)
    {
        v.push_back(number);
    }
    sort(v.begin(), v.end());
    
    do 
    {
        string tmp = "";
        
        for (int i = 0; i < v.size(); i++)
        {
            tmp.push_back(v[i]);
            num.push_back(stoi(tmp));
        }
    }while (next_permutation(v.begin(), v.end()));
    
    sort(num.begin(), num.end());
    num.erase(unique(num.begin(), num.end()), num.end());
    
    for (int n : num) 
    {
        if (isPrime(n))
        {
            answer++;
        }
    }
    
    return answer;
}

int main() {
    string numbers = "17";
    cout << solution(numbers) << "\n";
}