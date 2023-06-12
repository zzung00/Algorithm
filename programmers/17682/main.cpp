#include <string>
#include <iostream>
#include <vector>
#include <cctype>
#include <sstream>
#include <cmath>

using namespace std;

int solution(string dartResult) {
    int answer = 0;
    vector<int> sum(3, 0);
    vector<int> options(3, 1);

    stringstream ss(dartResult);
    int score;
    char bonus, option;

    for (int i = 0; i < sum.size(); i++)
    {
        ss >> score;
        bonus = ss.get();
        option = ss.get();

        if (bonus == 'S')
        {
            sum[i] += pow(score, 1);
        }
        else if (bonus == 'D')
        {
            sum[i] += pow(score, 2);
        }
        else if (bonus == 'T')
        {
            sum[i] += pow(score, 3);
        }

        if (option == '*')
        {
            if (i > 0 && options[i - 1])
            {
                options[i - 1] *= 2;
            }
            options[i] *= 2;
        }
        else if (option == '#')
        {
            options[i] *= -1;
        }
        else 
        {
            ss.unget();
        }
    }
    answer = sum[0] * options[0] + sum[1] * options[1] + sum[2] * options[2]; 

    return answer;
}

int main() {
    string dartResult = "1S2D*3T";
    cout << solution(dartResult) << "\n";
}