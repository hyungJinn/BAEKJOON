#include <iostream>

#define endl '\n'

using namespace std;

void solution() {
	int T;
	cin >> T;
	while (T--) {
		string s;
		cin >> s;
		cout << (s[0] - '0') + (s[2] - '0') << endl;
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