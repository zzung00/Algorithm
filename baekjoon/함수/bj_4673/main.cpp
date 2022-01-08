#include <iostream>
#include <vector>

using namespace std;

int d(int i) {
	int n = i;

	while (i != 0)
	{
		n += i % 10;
		i /= 10;		
	}

	return n;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<bool> vec(10000, true);

	for (int i = 1; i < vec.size(); i++)
	{
		if (vec[i])
		{
			cout << i << "\n";
		}

		int n = d(i);
		if (n < 10000)
		{
			vec[n] = false;
		}
	}

	return 0;
}