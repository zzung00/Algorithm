#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	double n;
	double m;
	double sum = 0;
	double average = 0;

	cin >> n;

	vector<double> score(n);

	for (int i = 0; i < n; i++)
	{
		cin >> score[i];
		sum += score[i];
	}
	m = *max_element(score.begin(), score.end());
	average = (sum / m * 100.0) / n;
	cout << average << "\n";

	return 0;
}