// M과 N이 주어질 때 M이상 N이하의 자연수 중 완전제곱수인 것을 모두 골라 그 합을 구하고 그 중 최솟값을 찾는 프로그램을 작성하시오. 
// 예를 들어 M=60, N=100인 경우 60이상 100이하의 자연수 중 완전제곱수는 64, 81, 100 이렇게 총 3개가 있으므로 그 합은 245가 되고 이 중 최솟값은 64가 된다.

#include <iostream>

using namespace std;

int main() {
	int m, n;
	int sum = 0;
	int min = 10001;

	cin >> m >> n;

	for (int j = 100; j >= 1; j--) {
		if (j * j >= m && j * j <= n) {
			sum += j * j;
			min = j * j;
		}
	}

	if (sum == 0)
	{
		cout << "-1";
		return 0;
	}

	cout << sum << '\n' << min;

}