#include <iostream>
#define endl "\n"
using namespace std;

int main() {
	cin.tie(NULL); ios::sync_with_stdio(false);

	int n; //���Ϸ��� n
	int n_numbers; //n�� ��¥ ����� ����
	int n_dirtn[50]; //n�� ������� ���� �迭
	cin >> n_numbers;

	//����� ������ 1���� ���
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
		//�ּҰ��� �ִ��� ã�Ƽ� ���Ѵ�.
		n = smallest * largest;
	}

	cout << n << endl;



}