#include <iostream>
using namespace std;

int main() {
	int n, m;

	cin >> n;
	cin >> m;

	if (n < m)
	{
		cout << "<" << endl;
	}
	else if (n > m)
	{
		cout << ">" << endl;
	}
	else
	{
		cout << "==" << endl;
	}

	return 0;
}