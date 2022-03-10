#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector<string> alphabet = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };

	string word;
	cin >> word;

	int idx;

	for (int i = 0; i < 8; i++) {
		while (1) {
			idx = word.find(alphabet[i]);
			if (idx == string::npos) //찾는 문자가 더이상 없음을 의미한다.
				break;
			word.replace(idx, alphabet[i].length(), "#");
		}
	}
	cout << word.length() << "\n";

}