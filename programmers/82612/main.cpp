#include <iostream>

using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long sum = 0;
    
    for (int i = 1; i <= count; i++)
    {
        sum += price * i;
    }
    if (sum < money)
    {
        answer = 0;
    }
    else
    {
        answer = sum - money;
    }

    return answer;
}

int main() {
    int price = 3;
    int money = 20;
    int count = 4;
    cout << solution(price, money, count) << "\n";
}