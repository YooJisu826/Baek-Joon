#include <iostream>
#include <algorithm>
using namespace std;

string S[1000];

string* make_S(string s) {

	for (int i = 0; i < s.length(); i++) {
		S[i] = s.substr(i);
	}

	return S;
}

int main() {

	cin.tie(NULL); ios::sync_with_stdio(false);

	string str;
	cin >> str;

	make_S(str);

	//sort(�迭�� ������, �迭�� ������ + �迭�� ũ��) -> �� ��° ���ڴ� ���� index�� �ƴ� �迭�� ũ��!!
	//�� ��° ���ڴ� ��������/�������� ����. default�� ��������
	//������������ �ϰ� ������ ���ϴ� �Լ� ������ �� �� �Լ� �̸��� ���ش�.
	sort(S, S + str.length());
		
	for (int i = 0; i < str.length(); i++) {
		cout << S[i] << "\n";
	}

}