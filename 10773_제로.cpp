#include <iostream>
using namespace std;

long long int number[100000];
int end_index = 0;
long long int result = 0;

void zero_number() {
	number[end_index] = 0;
	end_index--;
}

void plus_number(long long int num1) {
	end_index++;
	number[end_index] = num1;
}


int main() {

	cin.tie(NULL); ios::sync_with_stdio(false);

	int k;
	cin >> k;

	for (int i = 0; i < k; i++) {
		long long int num1;
		cin >> num1;

		if (num1 == 0)
			zero_number();
		else
			plus_number(num1);
	}

	for (int i = 1; i <= end_index; i++) {
		result += number[i];
	}

	cout << result << "\n";

	return 0;
}
