#include <iostream>
#define endl "\n"
using namespace std;

int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main() {

	int a, b;
	cin >> a >> b;

	cout << gcd(a, b) << endl << a*b/gcd(a,b);
}

/*
1. 최대공약수 gcd 구하기
a와 b의 최대공약수는, a%b와 b의 최대공약수와 같다.
따라서 b가 0이 될 때까지 계속 반복한다.
즉, a와 b의 최대공약수를 구하기 위해서는
b와 r = a%b의 최대공약수를 찾는다.
	-> a = b, b = r

2. 최소공배수 lcm 구하기
a와 b의 최소공배수는, a와 b를 곱한 것에 gcd(a,b)를 나눠주면 된다.

*/