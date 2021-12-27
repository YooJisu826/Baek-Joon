#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<int> P; int p;
vector<int> Time;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> p;
		P.push_back(p);
	}

	sort(P.begin(), P.end());

	Time.push_back(P[0]);
	for (int i = 1; i < P.size(); i++) {
		Time.push_back(Time[i - 1] + P[i]);
	}

	int sum = 0;
	for (int i = 0; i < Time.size(); i++) {
		sum += Time[i];
	}

	cout << sum;

	return 0;
}