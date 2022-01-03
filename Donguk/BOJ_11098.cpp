#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, m;
	
	cin >> t;

	while (t--) {
		cin >> m;
		vector<pair<int, string>>p(m);
		int i = 0, max = 0, ans = 0;
		while (m--) {
			cin >> p[i].first >> p[i].second;
			if (max < p[i].first) {
				max = p[i].first;
				ans = i;
			}
			i++;
		}

		cout << p[ans].second << '\n';
	}
}