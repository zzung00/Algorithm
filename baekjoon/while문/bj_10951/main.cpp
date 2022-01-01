#include <iostream>

using namespace std;

int main() {
	int a, b;
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	while (true)
	{
		cin >> a >> b;
		if (cin.eof() == true)
		{
			break;
		}
		cout << a + b << "\n";
	}

	return 0;
}