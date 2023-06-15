#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    
    for (int i = 0; i < phone_number.size() - 4; i++)
    {
        phone_number[i] = '*';
    }
    answer = phone_number;

    return answer;
}

int main() {
    string phone_number = "01033334444";
    cout << solution(phone_number) << "\n";
}