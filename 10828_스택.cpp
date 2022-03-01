#include <iostream>
#define MAX 10000

using namespace std;


class Stack {
public:
	int arr[MAX];
	int last = -1;

	void push(int a) {
		if (last == MAX)
			return;
		arr[++last] = a;
	}

	int pop() {
		if (empty())
			return -1;
		return arr[last--];
	}

	int size() {
		return (last +1);
	}

	bool empty() {
		return (last < 0);
	}

	int return_top() {
		if (empty())
			return -1;
		return arr[last];
	}
};


int main() {

	cin.tie(NULL); ios::sync_with_stdio(false);

	Stack s;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string command;
		cin >> command;

		if (command == "push") {
			int a;
			cin >> a;
			s.push(a);
		}
		else if (command == "pop") {
			cout << s.pop() << '\n';
		}
		else if (command == "size") {
			cout << s.size() << "\n";
		}
		else if (command == "empty") {
			if (s.empty())	cout << 1 << "\n";
			else cout << 0 << "\n";
		}
		else if (command == "top") {
			cout << s.return_top() << "\n";
		}

	}


}