#include <iostream>
using namespace std;

int main() {
	int h, m;

	cin >> h >> m;

	if (h != 0 && m < 45)
	{
		h -= 1;
		m += 15;
		cout << h << " " <<  m << endl;
	}
	else if (h == 0 && m < 45)
	{
		h = 23;
		m += 15;
		cout << h << " " << m << endl;
	}
	else
	{
		cout << h << " " << m - 45 << endl;
	}

	return 0;
}