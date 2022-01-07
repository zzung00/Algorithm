#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int c;
	cin >> c;

	for (int i = 0; i < c; i++)
	{
		double sum = 0;
		double average = 0;
		double n;
		cin >> n;
		vector<double> score(n);
		double rate;
		double result = 0;

		for (int j = 0; j < n; j++)
		{
			cin >> score[j];
			sum += score[j];
		}
		average = sum / n;

		for (int k = 0; k < n; k++)
		{
			if (score[k] > average)
			{
				result++;
			}
		}
		rate = result / n * 100;

		cout << fixed;
		cout.precision(3);
		cout << rate << "%" << "\n";
	}

	return 0;
}