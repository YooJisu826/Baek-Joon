#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		string str;
		cin >> str;
		int score = 0;
		int cont = 1;

		for (int k = 0; k < str.length(); k++) {
			//���������� ������ �� ������ ������ ���� cont +1
			if (str[k] == 'O' && str[k + 1] == 'O') {
				cont++;
			}
			//������ ���� �� ������ �����ش�. �׸��� �ٽ� 1�� ����.
			else if (str[k] == 'O' && (str[k + 1] == 'X' || k == str.length() - 1)) {
				score += (cont * (cont + 1) / 2);
				cont = 1;
			}
			else if (str[k] == 'X') {
				cont += 0;
			}
		}

		cout << score << "\n";

	}
}