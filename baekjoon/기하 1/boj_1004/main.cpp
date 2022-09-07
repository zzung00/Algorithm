#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n;
    int x1, x2, y1, y2;
    int x, y, r;
    int enter, departure;
    cin >> t;

    while (t--)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> n;
        enter = 0;
        departure = 0;

        while (n--)
        {
            cin >> x >> y >> r;

            if ((x-x1) * (x-x1) + (y-y1) * (y-y1) < r * r)
            {
                if ((x-x2) * (x-x2) + (y-y2) * (y-y2) > r * r)
                {
                    departure++;
                }
                
            }
            
            if ((x-x1) * (x-x1) + (y-y1) * (y-y1) > r * r)
            {
                if ((x-x2) * (x-x2) + (y-y2) * (y-y2) < r * r)
                {
                    enter++;
                }
                
            }
        
        }
        cout << enter + departure << "\n";
        
    }
    

    return 0;
}