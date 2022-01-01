#include <iostream>

using namespace std;

int main() {
	int a, b, len;

	cin >> len;

	for (int i = 1; i <= len; i++)
	{
		cin >> a >> b;
		cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << "\n";
	}

	return 0;
}