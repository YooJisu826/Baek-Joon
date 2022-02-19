#include <iostream>
#include <string>
using namespace std;

int number_count[10];

int main() {

	cin.tie(NULL); ios::sync_with_stdio(false);

	for (int i = 0; i < 10; i++) {
		number_count[i] = 0;
	}

	int a, b, c;
	cin >> a >> b >> c;

	int num = a * b * c;

	string str = to_string(num);

	for (int i = 0; i < str.length(); i++) {
		number_count[str[i] -'0'] += 1;
	}

	for (int i = 0; i < 10; i++) {
		cout << number_count[i] << "\n";
	}


}