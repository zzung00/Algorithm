#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;

	int result = a * b * c;
	int len = 0;
	int num = result;
	int n;
	int arr[10] = { 0, };

	while (num > 0)
	{
		num = int(num / 10);
		len++;
	}

	for (int i = len; i >= 1; i--)
	{
		n = pow(10, i - 1);
		arr[result / n]++;
		result %= n;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "\n";
	}
	return 0;
}