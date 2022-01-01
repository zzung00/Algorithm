#include <iostream>

using namespace std;

int main() {
	int len, a, b;
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> len;

	for (int i = 0; i < len; i++)
	{
		cin >> a >> b;
		cout << a + b << "\n";
	}

	return 0;
}