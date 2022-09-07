#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int w, h, x, y, p;
    int x1, y1;
    int count = 0;
    cin >> w >> h >> x >> y >> p;

    while (p--)
    {
        cin >> x1 >> y1;

        if ((x1-x) * (x1-x) + (y1-(y+h/2)) * (y1-(y+h/2)) <= (h/2) * (h/2) && x1 < x)
        {
            count++;
        }
        else if (x1 >= x && x1 <= x+w && y1 >= y && y1 <= y+h)
        {
            count++;
        }
        else if ((x1-(x+w)) * (x1-(x+w)) + (y1-(y+h/2)) * (y1-(y+h/2)) <= (h/2) * (h/2) && x1 > x+w)
        {
            count++;
        }
        
    }
    cout << count << "\n";

    return 0;
}