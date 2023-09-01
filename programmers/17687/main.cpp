#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string change(int n, int base) {
    string list = "0123456789ABCDEF";
    string str = "";
    
    while (n > 0)
    {
        str += list[n % base];
        n /= base;
    }
    reverse(str.begin(), str.end());
    
    return str;
}

string solution(int n, int t, int m, int p) {
    string answer = "";
    string tmp = "0";
    int tm = t * m;
    
    for (int i = 1; tmp.size() <= tm; i++)
    {
        tmp += change(i, n);
    }
    for (int i = p - 1; i < tm; i += m)
    {
        answer += tmp[i];
    }
    
    return answer;
}

int main () {
    int n = 2;
    int t = 4;
    int m = 2;
    int p = 1;
    cout << solution(n, t, m, p) << "\n";
}