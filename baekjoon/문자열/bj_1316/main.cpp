#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    string input;
    int count = 0;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> input;
        bool isGroup = true;
        input.erase(unique(input.begin(), input.end()), input.end());
        sort(input.begin(), input.end());
        for (int j = 0; j < input.size(); j++)
        {
            if (input[j] == input[j+1])
            {
                isGroup = false;
                break;
            }   
        }
        if (isGroup)
        {
            count++;
        }
    }
    cout << count;

    return 0;
}