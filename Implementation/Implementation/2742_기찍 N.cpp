#include <iostream>

#define endl '\n'

using namespace std;

void solution() {
	int N; cin >> N;
	for (int i = N; i >= 1; i--) cout << i << endl;
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