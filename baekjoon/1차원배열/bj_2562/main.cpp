#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int arr[9];
	int max = 0;
	int a = 0;

	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];

		if (arr[i] > max)
		{
			max = arr[i];
			a = i;
		}
	}
	cout << max << " " << a + 1 << "\n";

	return 0;
}