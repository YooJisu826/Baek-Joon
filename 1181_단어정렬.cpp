#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b) {
	//���̰� ������ ������
	if (a.length() == b.length()) {
		return a < b;
	}
	//���� ��
	else {
		return a.length() < b.length();
	}
}

int main() {

	cin.tie(NULL); ios::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<string> word;
	string temp;
	for (int i = 0; i < n; i++)
		cin >> word[i];

	sort(word.begin(), word.end(), compare);

	for (int i = 0; i < n; i++) {
		if (temp == word[i]) continue;
		cout << word[i] << '\n';
		temp = word[i];
	}



}