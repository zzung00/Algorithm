#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    vector<vector<int>> v(n, vector<int>(n));
    int state = 0;
    int x = 0, y = 0;
    int num = 1;
    
    for (int i = 0; i < n; i++)
    {
        if (state == 0)
        {
            for (int j = i; j < n; j++)
            {
                v[x++][y] = num++;
            }
            x--; 
            y++;
            state = 1;
        }
        else if (state == 1)
        {
            for (int j = i; j < n; j++)
            {
                v[x][y++] = num++;
            }
            x--;
            y-=2;
            state = 2;
        }
        else if (state == 2)
        {
            for (int j = i; j < n; j++)
            {
                v[x--][y--] = num++;
            }
            x+=2;
            y++;
            state = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i][j])
            {
                answer.push_back(v[i][j]);
            }
        }
    }
    return answer;
}

int main() {
    int n = 4;
    vector<int> result = solution(n);

    for (int r : result)
    {
        cout << r << " ";
    }
    cout << "\n";
}