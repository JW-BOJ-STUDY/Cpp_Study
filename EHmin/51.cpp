#include <iostream>
using namespace std;

int main()
{
	int min, max;
	int pivot = 1;
	int count = 0;
	int first = -1;

	cin >> min >> max;

	while (true) {
		if (pivot * pivot >= min) break;
		pivot += 1;
	}

	first = pivot * pivot;

	for (int i = min; i <= max; i++) {
		if (i == pivot * pivot) {
			count += i;
			pivot += 1;
		}
	}

	if (count == 0) {
		cout << -1 << endl;
	}
	else {
		cout << count << endl;
		cout << first << endl;
	}


	return 0;
}