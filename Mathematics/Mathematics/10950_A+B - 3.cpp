#include <iostream>

#define endl '\n'

using namespace std;

int solution() {
	int a, b;
	cin >> a >> b;
	return a + b;
}

void solve() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
		cout << solution() << endl;
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	solve();
	
	return 0;
}