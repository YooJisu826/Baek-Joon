#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL); ios::sync_with_stdio(false);

	int n;
	cin >> n;

	if (n == 1) {
		string one;
		cin >> one;
		cout << one << "\n";

	}
	else {
		string file[50];
		char result[50];

		for (int i = 0; i < 50; i++) {
			result[i] = ' ';
		}

		for (int i = 0; i < n; i++) {
			cin >> file[i];
		}

		int len = file[0].length();

		if (len == 1) {
			for (int i = 0; i < n-1; i++) {
				if (file[i] != file[i + 1])
					result[0] = '?';
				else {
					if(result[0] != '?')
						result[0] = file[0][0];
				}
					
			}
			cout << result[0] << "\n";
			
		}
		else {
			for (int i = 0; i < n - 1; i++) {
				for (int j = 0; j < len; j++) {
					if (file[i][j] != file[i + 1][j]) {
						result[j] = '?';
					}
					else {
						if(result[j] != '?')
							result[j] = file[i][j];
					}
				}
			}

			for (int i = 0; i < len; i++) {
				cout << result[i];
			}
			cout << "\n";
		}
	}

}