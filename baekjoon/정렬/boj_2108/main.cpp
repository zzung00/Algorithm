#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;

void middle(vector<double> v) {
    sort(v.begin(), v.end());
    
    for (int i = 0; i < v.size(); i++)
    {
        if (i == (v.size() - 0) / 2)
        {
            cout << v[i] << "\n";
        }
    }
}

void frequency(vector<double> v) {
    vector<int> count(8001, 0);
    int max, result;
    int cnt = 0;

    for (int i = 0; i < v.size(); i++)
    {
        count[v[i] + 4000]++;
    }
    max = *max_element(count.begin(), count.end());

    for (int i = 0; i < 8001; i++)
    {
        if (count[i] == max)
        {
            cnt++;
            result = i - 4000;
        }
        if (cnt == 2)
        {
            break;
        }
    }
    cout << result << "\n";
}

void range(vector<double> v) {
    double maximum = *max_element(v.begin(), v.end());
    double miniumum = *min_element(v.begin(), v.end());
    cout << maximum - miniumum << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double n;
    cin >> n;
    vector<double> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    double sum = accumulate(v.begin(), v.end(), 0);

    if (round(sum / n) == -0)
    {
        cout << 0 << "\n";
    }
    else
    {
        cout << round(sum / n) << "\n";
    }    
    middle(v); 
    frequency(v); 
    range(v); 

    return 0;
}