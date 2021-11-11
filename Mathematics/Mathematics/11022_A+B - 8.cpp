#include <iostream>

#define endl '\n'

using namespace std;

void solve() {
	int T;
	cin >> T;
	int a = 0, b = 0;
	for (int i = 1; i <= T; i++) {
		cin >> a >> b;
		cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << endl;
	}
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	solve();

	return 0;
}