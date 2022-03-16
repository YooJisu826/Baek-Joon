#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL); ios::sync_with_stdio(false);

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int a;
		cin >> a;

		string str;
		cin >> str;

		for (int j = 0; j < str.length(); j++) {
			if (j == a - 1)	continue;
			cout << str[j];
		}
		cout << "\n";
	}
}