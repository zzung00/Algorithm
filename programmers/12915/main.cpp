#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int m;

bool compare(string a, string b) {
    if (a[m] == b[m])
    {
        return a < b;
    }
    else 
    {
        return a[m] < b[m];
    }
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;

    m = n;
    sort(strings.begin(), strings.end(), compare);
    answer = strings;
    
    return answer;
}

int main() {
    vector<string> strings = {"abce", "abcd", "cdx"};
    int n = 2;

    solution(strings, n);
}