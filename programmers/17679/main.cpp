#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int m, int n, vector<string> board) {
    int answer = 0;
    bool going = true;
    
    while (going) 
    {
        bool arr[31][31] = {false, };
        going = false;
        
        for (int i = 0; i < m - 1; i++)
        { 
            for (int j = 0; j < n - 1; j++)
            {
                if (board[i][j] == ' ')
                {
                    continue;
                }
                char c = board[i][j];
                
                if (board[i][j+1] == c && board[i+1][j] == c && board[i+1][j+1] == c)
                {
                    arr[i][j] = true;
                    arr[i][j+1] = true;
                    arr[i+1][j] = true;
                    arr[i+1][j+1] = true;
                    going = true;
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] == true)
                {
                    answer++;
                    
                    for (int k = i - 1; k >= 0; k--)
                    {
                        board[k+1][j] = board[k][j];
                        board[k][j] = ' ';
                    }
                }
            }
        }
    }
    return answer;
}

int main() {
    int m = 4;
    int n = 5;
    vector<string> board = {"CCBDE", "AAADE", "AAABF", "CCBBF"};
    cout << solution(m, n, board) << "\n";
}