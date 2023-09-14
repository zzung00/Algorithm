#include <string>
#include <set>
#include <utility>
#include <iostream>

using namespace std;

int solution(string dirs) {
    int answer = 0;
    int from[2];
    int dst[2];
    int x = 0, y = 0;
    set<pair<pair<int, int>, pair<int, int>>> s;
    
    for (char dir : dirs)
    {
        from[0] = x;
        from[1] = y;
        
        if (dir == 'U' && y < 5)
        {
            y++;
        }
        else if (dir == 'D' && y > -5)
        {
            y--;
        }
        else if (dir == 'L' && x > -5)
        {
            x--;
        }
        else if (dir == 'R' && x < 5)
        {
            x++;
        }
        else
        {
            continue;
        }
        dst[0] = x;
        dst[1] = y;
        
        s.insert({{from[0], from[1]}, {dst[0], dst[1]}});
        s.insert({{dst[0], dst[1]}, {from[0], from[1]}});
    }
    answer = s.size() / 2;
    
    return answer;
}

int main() {
    string dirs = "ULURRDLLU";
    cout << solution(dirs) << "\n";
}