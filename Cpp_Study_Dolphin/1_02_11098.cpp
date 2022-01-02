// 11098, Ã¿½Ã¸¦ µµ¿ÍÁà
#include <iostream>

using namespace std;

int main() {
	int n, p, max = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> p;
		string* p_namelist = new string[p];
		int* p_paylist = new int[p];

		for (int j = 0; j < p; j++) {
			cin >> p_paylist[j] >> p_namelist[j];
			if (p_paylist[j] >= p_paylist[max]) max = j;
		}

		cout << p_namelist[max] << endl;
		delete[]p_namelist;
		delete[]p_paylist;
	}

	return 0;
}