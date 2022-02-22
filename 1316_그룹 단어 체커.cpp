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
다음 알파벳이 같은 알파벳인지 체크한다.
1. 같은 알파벳일 경우
다음 알파벳으로 넘어간다.

2. 다른 알파벳일 경우
단어를 끝까지 돌면서 같은 알파벳이 있는 지 확인한다.
이때 2-1. 있을 경우엔 그룹 단어가 아니다.
	 2-2. 없을 경우 그룹 단어이다.

3. 끝까지 확인을 마친다.
*/