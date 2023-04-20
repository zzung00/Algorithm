#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); 

    int n, m, a, b, temp;
    int arr[101];
    cin >> n >> m;

    for (int i = 1; i <= n; ++i)
    {
        arr[i] = i;
    }

    while (m--)
    {
        cin >> a >> b;
        temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}