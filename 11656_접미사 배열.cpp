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

	//sort(배열의 포인터, 배열의 포인터 + 배열의 크기) -> 두 번째 인자는 종료 index가 아닌 배열의 크기!!
	//세 번째 인자는 오름차순/내림차순 결정. default가 오름차순
	//내림차순으로 하고 싶으면 비교하는 함수 지정한 후 그 함수 이름을 써준다.
	sort(S, S + str.length());
		
	for (int i = 0; i < str.length(); i++) {
		cout << S[i] << "\n";
	}

}