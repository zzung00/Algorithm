#include <iostream>
#include <vector>

using namespace std;

bool sequence(int x) {
	vector<int> vec;
	int n, m;

	while (x)
	{
		vec.push_back(x % 10);
		x /= 10;
	}

	if (vec.size() == 1)
	{
		return true;
	}
	m = vec[0] - vec[1];
	n = vec[1];

	for (int i = 2; i < vec.size(); i++)
	{
		int d;
		d = n - vec[i];
		if (m != d)
		{
			return false;
		}
		n = vec[i];
	}
	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int x;
	int count = 0;
	cin >> x;
	
	for (int i = 1; i <= x; i++)
	{
		if (sequence(i) == true)
		{
			count++;
		}
	}
	cout << count;

	return 0;
}