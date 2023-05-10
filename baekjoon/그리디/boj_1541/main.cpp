#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;
    string num = "";
    bool isMinus = false;
    int result = 0;

    cin >> str;

    for (int i = 0; i <= str.length(); i++)
    {
        if (str[i] == '+' || str[i] == '-' || i == str.length())
        {
            if (isMinus)
            {
                result -= stoi(num);
            }
            else
            {
                result += stoi(num);
            }
            num = "";
        }
        else
        {
            num += str[i];
        }

        if (str[i] == '-')
        {
            isMinus = true;
        }
        
    }
    cout << result << "\n";

    return 0;
}