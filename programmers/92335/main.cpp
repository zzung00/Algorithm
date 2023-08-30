#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

bool isPrime(long long m) {
    if (m < 2) return false;
    for (int i = 2; i <= sqrt(m); i++)
    {
        if (m % i == 0) return false;
    }
    return true;
}

int solution(int n, int k) {
    int answer = 0;
    string prime = "";
    
    while (n > 0)
    {
        prime += to_string(n % k);
        n /= k;
    }
    reverse(prime.begin(), prime.end());
    string tmp = "";
    
    for (char p : prime)
    {
        if (p == '0') { 
            if (!tmp.empty() && isPrime(stoll(tmp))) 
            {
                answer++; 
            } 
            tmp = ""; 
        } 
        else tmp += p; 
    }
    if (!tmp.empty() && isPrime(stoll(tmp))) 
    {
        answer++; 
    } 
    
    return answer;
}

int main() {
    int n = 437674;
    int k = 3;
    cout << solution(n, k) << "\n";
}