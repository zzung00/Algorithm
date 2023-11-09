#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    vector<int> answer(2, 0);
    int len = sequence.size() + 1;
    int start = 0, end = 0;
    int sum = sequence[0];
    
    while (end < sequence.size() && start <= end)
    {
        if (sum < k)
        {
            sum += sequence[++end];
        }
        else if (sum > k)
        {
            sum -= sequence[start++];
        }
        else if (sum == k)
        {
            if (end - start + 1 < len)
            {
                len = end - start + 1;
                answer[0] = start;
                answer[1] = end;
            }
            else if (end - start + 1 == len)
            {
                if (start < answer[0])
                {
                    answer[0] = start;
                    answer[1] = end;
                }
            }
            sum -= sequence[start++];
        }
    }
    return answer;
}

int main() {
    vector<int> sequence = {1, 2, 3, 4, 5};
    int k = 7;
    vector<int> result = solution(sequence, k);

    for (int r : result)
    {
        cout << r << " ";
    }
    cout << "\n";
}