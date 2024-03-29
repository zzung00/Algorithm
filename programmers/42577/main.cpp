#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    
    sort(phone_book.begin(), phone_book.end());
    
    for (int i = 1; i < phone_book.size(); i++)
    {
        string str = phone_book[i];
        if (str.find(phone_book[i - 1]) == 0)
        {
            answer = false;
            break;
        }
    }
    return answer;
}

int main() {
    vector<string> phone_book = {"119", "97674223", "1195524421"};
    cout << solution(phone_book) << "\n";
}