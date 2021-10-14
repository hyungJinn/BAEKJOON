#include <iostream>

#define endl '\n'

using namespace std;

void solution() {
	int X = 0;
	cin >> X;

	if (100 >= X && X >= 90) cout << "A" << endl;
	else if (90 > X && X >= 80) cout << "B" << endl;
	else if (80 > X && X >= 70) cout << "C" << endl;
	else if (70 > X && X >= 60) cout << "D" << endl;
	else cout << "F" << endl;
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