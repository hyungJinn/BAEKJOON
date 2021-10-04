#include <iostream>

#define endl '\n'

using namespace std;

void solution() {
	int a = 0, b = 0;
	cin >> a >> b;
	while (!cin.eof()) {
		cout << a + b << endl;
		cin >> a >> b;
	}
}

void solve() {
	solution();
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	solve();

	return 0;
}