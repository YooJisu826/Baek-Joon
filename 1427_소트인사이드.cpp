#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL); ios::sync_with_stdio(false);

	string N;
	cin >> N;

	//�ִ��� ã�´�.

	for (int i = 0; i < N.length(); i++) {
		//�ִ�
		int largest = N[i];
		for (int j = i; j < N.length(); j++) {
			if (N[j] > largest) {
				largest = N[j];
				int tmp = N[i];
				N[i] = N[j];
				N[j] = tmp;
			}
		}
	}

	cout << N << "\n";
}