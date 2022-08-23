#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<string> vn;
    vector<string> vm;
    string name;
    int n, m;
    cin >> n >> m;

    while (n--)
    {
        cin >> name;
        vn.push_back(name);
    }

    while (m--)
    {
        cin >> name;
        vm.push_back(name);
    }

    sort(vn.begin(), vn.end());
    sort(vm.begin(), vm.end());

    vector<string> buff;
    auto iter = set_intersection(vn.begin(), vn.end(), vm.begin(), vm.end(), back_inserter(buff));
    
    cout << buff.size() << "\n";
    for (string s : buff)
    {
        cout << s << "\n";
    }
    

    return 0;
}