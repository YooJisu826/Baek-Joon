#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL); ios::sync_with_stdio(false);

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int N;
		cin >> N;

		long long result = 0;

		for (int j = 1; j <= N; j++) {
			result += (N / j)*j;
		}
		cout << result << "\n";
	}


}