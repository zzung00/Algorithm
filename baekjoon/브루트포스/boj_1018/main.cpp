#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string wb[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};

string bw[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};

string board[50];

int wbCount(int x, int y) {
    int count = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (board[x + i][y + j] != wb[i][j])
            {
                count++;
            }
            
        }
        
    }
    return count;
}

int bwCount(int x, int y) {
    int count = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (board[x + i][y + j] != bw[i][j])
            {
                count++;
            }
            
        }
        
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    pair<int, int> p;
    int m;
    int minimum = 12345;
    cin >> p.first >> p.second;

    for (int i = 0; i < p.first; i++)
    {
        cin >> board[i];
    }
    
    for (int i = 0; i <= p.first - 8; i++)
    {
        for (int j = 0; j <= p.second - 8; j++)
        {
            m = min(wbCount(i, j), bwCount(i, j));
            if (m < minimum)
            {
                minimum = m;
            }
            
        }
        
    }
    cout << minimum << "\n";

    return 0;
}