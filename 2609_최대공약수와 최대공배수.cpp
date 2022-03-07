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
1. �ִ����� gcd ���ϱ�
a�� b�� �ִ�������, a%b�� b�� �ִ������� ����.
���� b�� 0�� �� ������ ��� �ݺ��Ѵ�.
��, a�� b�� �ִ������� ���ϱ� ���ؼ���
b�� r = a%b�� �ִ������� ã�´�.
	-> a = b, b = r

2. �ּҰ���� lcm ���ϱ�
a�� b�� �ּҰ������, a�� b�� ���� �Ϳ� gcd(a,b)�� �����ָ� �ȴ�.

*/