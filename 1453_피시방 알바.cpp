#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL); ios::sync_with_stdio(false);

	int seat[101];
	int count = 0;

	for (int i = 0; i < 101; i++) {
		seat[i] = 0;
	}


	int n = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int t = 0;
		cin >> t;

		if (seat[t] == 0)
			seat[t] = 1;
		else
			count++;
	}

	cout << count << "\n";
}