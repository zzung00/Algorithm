#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); 

    int n, v;
    int count = 0;
    cin >> n;
    vector<int> vec(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    
    cin >> v;
    
    for (int i = 0; i < n; i++)
    {
        if (vec[i] == v)
        {
            count++;
        }       
    }
    cout << count << "\n";
    
    return 0;
}