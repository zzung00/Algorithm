#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    int p, s;
    int package, single = 1000;
    int a, b, c;

    cin >> n >> m;
    
    while (m--)
    {
        cin >> p >> s;
        package = min(package, p);
        single = min(single, s);
    }    

    a = (n / 6) * package + (n % 6) * single;
    b = n * single;
    c = (n / 6 + 1) * package;

    cout << min(a, min(b, c)) << "\n";

    return 0;
}