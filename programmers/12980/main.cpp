#include <iostream>

using namespace std;

int solution(int n)
{
    int ans = 0;
    
    while (n != 0)
    {
        if (n % 2 != 0)
        {
            n--;
            ans++;
        }
        else
        {
            n /= 2;
        }
    }
    return ans;
}

int main() {
    int n = 5;
    cout << solution(n) << "\n";
}