#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	vector<int> vec(42);

	for (int i = 0; i < 10; i++)
	{
		cin >> n;
		vec[n % 42]++;
	}

	n = 0;

	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i] > 0)
		{
			n++;
		}
	}
	cout << n << "\n";

	return 0;
}