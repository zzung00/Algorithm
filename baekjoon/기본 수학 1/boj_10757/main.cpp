#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void bigNum(string a, string b) {
    vector<int> result;
    int A, B;
    
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    if (a.size() < b.size())
    {
        swap(a, b);
    }
    
    for (int i = 0; i < b.size(); i++)
    {
        A = a[i] - '0';
        B = b[i] - '0';
        result.push_back(A + B);
    }
    
    for (int i = b.size(); i < a.size(); i++)
    {
        result.push_back(a[i] - '0');
    }
    
    for (int i = 0; i < result.size(); i++)
    {
        if (result[i] >= 10)
        {
            if (i == result.size()-1)
            {
                result.push_back(0);
            }
            result[i+1]++;
            result[i] -= 10;
        }
    }
    reverse(result.begin(), result.end());
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;
    bigNum(a, b);

    return 0;
}