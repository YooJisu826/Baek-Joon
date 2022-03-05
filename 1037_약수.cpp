#include <iostream>
#define endl "\n"
using namespace std;

int main() {
	cin.tie(NULL); ios::sync_with_stdio(false);

	int n; //구하려는 n
	int n_numbers; //n의 진짜 약수의 개수
	int n_dirtn[50]; //n의 약수들을 받을 배열
	cin >> n_numbers;

	//약수의 개수가 1개인 경우
	if (n_numbers == 1) {
		cin >> n_dirtn[0];
		n = n_dirtn[0] * n_dirtn[0];
	}

	else {

		for (int i = 0; i < n_numbers; i++) {
			cin >> n_dirtn[i];
		}

		int smallest = n_dirtn[0];
		int largest = n_dirtn[0];

		for (int i = 0; i < n_numbers; i++) {
			if (smallest > n_dirtn[i])
				smallest = n_dirtn[i];
			else if (largest < n_dirtn[i])
				largest = n_dirtn[i];
		}
		//최소값과 최댓값을 찾아서 곱한다.
		n = smallest * largest;
	}

	cout << n << endl;



}