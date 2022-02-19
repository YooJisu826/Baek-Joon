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
			//다음꺼까지 연속일 때 연속의 개수를 세는 cont +1
			if (str[k] == 'O' && str[k + 1] == 'O') {
				cont++;
			}
			//연속이 끊길 때 점수를 더해준다. 그리고 다시 1로 설정.
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