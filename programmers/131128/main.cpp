#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

map<char, int> x;
map<char, int> y;

string solution(string X, string Y) {
    string answer = "";
    
    for (int i = 0; i < X.size(); i++) 
    {
        x[X[i]]++;
    }
    for (int i = 0; i < Y.size(); i++)
    {
        y[Y[i]]++;
    }
    
    for (int i = 9; i >= 0; i--)
    {
        int n = min(x[i + '0'], y[i + '0']);
        
        for (int j = 0; j < n; j++)
        {
            answer += i + '0';
        }
    }
    
    if (answer == "")
    {
        return "-1";
    }
    else if (answer[0] == '0')
    {
        return "0";
    }
    
    return answer;
}

int main() {
    string X = "100";
    string Y = "2345";
    cout << solution(X, Y) << "\n";
}