#include <iostream>
using namespace std;

bool minority(int n) {
	if (n == 1) return false;
	if (n == 2) return true;
	for (int i = 2; i < n; i++) {
		if (n % i == 0)	return false;
	}
	return true;
}



int main() {

	int t;
	cin >> t;

	int thtn = 0;

	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;

		if (minority(n)) 
			thtn++;
	}

	cout << thtn << "\n";
}