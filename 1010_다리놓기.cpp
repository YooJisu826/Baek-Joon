#include <iostream>
using namespace std;

int N, M;
int c[30][30];

int main() {

	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> N >> M;

		if (N == 1) cout << M << "\n";
		else {

			for (int i = 0; i < 30; i++) {
				c[i][i] = 1;
				c[i][0] = 1;
			}

			for (int i = 2; i < 30; i++) {
				for (int j = 1; j < 30; j++) {

					c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
				}
			}

			cout << c[M][N] << "\n";
		}
	}



}