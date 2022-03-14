#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b) {
	//길이가 같으면 사전순
	if (a.length() == b.length()) {
		return a < b;
	}
	//길이 순
	else {
		return (a.length() < b.length());
	}
}

int main() {

	cin.tie(NULL); ios::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<string> word;
	string temp;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		word.push_back(s);
	}

	sort(word.begin(), word.end(), compare);

	for (int i = 0; i < n; i++) {
		if (temp == word[i]) continue;
		cout << word[i] << '\n';
		temp = word[i];
	}
}
