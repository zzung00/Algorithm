#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> croatian = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    string input;
    cin >> input;

    for (int i = 0; i < croatian.size();)
    {
        int pos = input.find(croatian[i]);
        if (pos != string::npos)
        {
            input.replace(pos, croatian[i].size(), "!");
        }
        else {
            i++;
        }        
    }
    
    cout << input.size() << "\n";

    return 0;
}