#include <iostream>
#include <vector> 
#include <algorithm> 

using namespace std;

int main() {
	int i;
	cin >> i;
	vector<pair<pair<int, int>, pair<int, string>>>v(i);


	while (i--){
		cin >> v[i].second.second >> v[i].second.first >> v[i].first.second >> v[i].first.first; 
	}

	sort(v.begin(), v.end());

	return 0;
}