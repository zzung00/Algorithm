#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	int max = -1000000;
	int min = 1000000;
	
	cin >> n;

	int *arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

		if (arr[i] > max)
		{
			max = arr[i];
		}

		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << min << " " << max << "\n";

	return 0;
}