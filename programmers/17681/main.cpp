#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bitset>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;

    for (int i = 0; i < n; i++)
    {
        arr1[i] = arr1[i] | arr2[i];
        bitset<16> bit(arr1[i]);
        string s = bit.to_string();
        string str;

        for (int j = 16 - n; j < 16; j++)
        {
            if (s[j] == '0' && s[j] == '0')
            {
                str.push_back(' ');
            }
            else
            {
                str.push_back('#');
            }
        }
        answer.push_back(str);                
    }
    
    return answer; 
}

int main() {
    int n = 5;
    vector<int> arr1 = {9, 20, 28, 18, 11};
    vector<int> arr2 = {30, 1, 21, 17, 28};
    vector<string> result = solution(n, arr1, arr2);

    for (auto i : result)
    {
        cout << i << "\n";
    }
     
}