#include <iostream>

using namespace std;

int n;
int board[15];
int cnt = 0;

int isProper(int m)
{
    for (int i = 0; i < m; i++)
    {
        if (board[i] == board[m] || m - i == abs(board[m] - board[i]))
        {
            return 0;
        }
        
    }
    return 1;
}

void nqueen(int m)
{
    if (m == n)
    {
        cnt++;
        return;
    }
    
    for (int i = 0; i < n; i++)
    {
        board[m] = i;

        if (isProper(m))
        {
            nqueen(m + 1);
        }
        
    }
    
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    nqueen(0);
    cout << cnt << "\n";

    return 0;
}