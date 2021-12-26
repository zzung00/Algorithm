#include <iostream>

using namespace std;

int main() {
	int a, b, len;

	cin >> len;

	for (int i = 0; i < len; i++)
	{
		cin >> a >> b;
		cout << a + b << endl;
	}

	return 0;
}