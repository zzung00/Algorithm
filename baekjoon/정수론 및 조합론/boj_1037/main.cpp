#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int count;
    cin >> count;
    vector<int> div(count);

    for (int i = 0; i < count; i++)
    {
        cin >> div[i];
    }
    int maximum = *max_element(div.begin(), div.end());
    int minimum = *min_element(div.begin(), div.end());

    cout << maximum * minimum << "\n";

    return 0;
}