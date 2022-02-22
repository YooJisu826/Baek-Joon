#include <iostream>
using namespace std;

bool group_checker(string str) {
	char tmp;
	for (int j = 0; j < str.length() -1; j++) {
		tmp = str[j];

		if (str[j + 1] != tmp) {
			for (int k = j+1; k < str.length(); k++) {
				if (tmp == str[k])	return false;
			}
		}
	}
	return true;
}

int main() {

	cin.tie(NULL); ios::sync_with_stdio(false);

	int n;
	cin >> n;
	int count = 0;

	for (int i = 0; i < n; i++) {

		string str;
		cin >> str;

		if (group_checker(str))	count++;
	}

	cout << count << "\n";
}

/*
���� ���ĺ��� ���� ���ĺ����� üũ�Ѵ�.
1. ���� ���ĺ��� ���
���� ���ĺ����� �Ѿ��.

2. �ٸ� ���ĺ��� ���
�ܾ ������ ���鼭 ���� ���ĺ��� �ִ� �� Ȯ���Ѵ�.
�̶� 2-1. ���� ��쿣 �׷� �ܾ �ƴϴ�.
	 2-2. ���� ��� �׷� �ܾ��̴�.

3. ������ Ȯ���� ��ģ��.
*/