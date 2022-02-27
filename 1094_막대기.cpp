#include <iostream>
using namespace std;


int main() {

	cin.tie(NULL); ios::sync_with_stdio(false);

	int x;
	cin >> x;
	int count = 0;

	while (x > 0) {
		if (x % 2 == 1) {
			count++;
		}
		x /= 2;
	}


	cout << count << "\n";
	return 0;
}