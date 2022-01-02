#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, left, right;
	int i = 1;

	cin >> n;

	m = n;

	while (true)
	{
		left = m / 10;
		right = m % 10;
		m = right * 10 + ((left + right) % 10);

		if (n == m)
		{
			break;
		}
		i++;
	}
	cout << i << "\n";

	return 0;
}