#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> s;
    
    for (int i = 0; i < moves.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            int chk = moves[i] - 1;
            
            if (board[j][chk] != 0)
            {
                if (!s.empty() && s.top() == board[j][chk])
                {
                    s.pop();
                    answer += 2;
                }
                else
                {
                    s.push(board[j][chk]);
                }
                board[j][chk] = 0;
                break;
            }
        }
    }
    return answer;
}

int main() {
    vector<vector<int>> board = {{0, 0, 0, 0, 0}, {0, 0, 1, 0, 3}, {0, 2, 5, 0, 1}, {4, 2, 4, 4, 2}, {3, 5, 1, 3, 1}};
    vector<int> moves = {1, 5, 3, 5, 1, 2, 1, 4};
    cout << solution(board, moves) << "\n";
}