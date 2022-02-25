#include <iostream>
#include <string>
using namespace std;



int main() {
	cin.tie(NULL); ios::sync_with_stdio(false);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s == "P=NP")	cout << "skipped\n";
		else {
			int idx = s.find("+");
			int a = stoi(s.substr(0, idx));
			int b = stoi(s.substr(idx + 1));
			
			cout << a + b << "\n";
		} 
	}



	return 0;
}