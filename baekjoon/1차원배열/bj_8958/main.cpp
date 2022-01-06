#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	string s;

	for (int i = 0; i < n; i++)
	{
		int count = 0;
		int sum = 0;
		cin >> s;

		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == 'O')
			{
				count++;
			}
			else if (s[i] == 'X')
			{
				count = 0;
			}
			sum += count;
		}
		cout << sum << "\n";
	}

	return 0;
}