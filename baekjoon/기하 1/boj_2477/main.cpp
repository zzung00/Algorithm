#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);   
    cout.tie(nullptr);

    pair<int, int> p[6];
    int width = 1;
    int k, result;

    cin >> k;
    for (int i = 0; i < 6; i++)
    {
        cin >> p[i].first >> p[i].second;
    }

    for (int i = 0; i < 6; i++)
    {
        int max = p[i].second * p[(i+1)%6].second;

        if (width == 1 || max > width)
        {
            width = max;
            result = (width - p[(i+3)%6].second * p[(i+4)%6].second) * k;
        }
    }
    cout << result << "\n";

    return 0;
}