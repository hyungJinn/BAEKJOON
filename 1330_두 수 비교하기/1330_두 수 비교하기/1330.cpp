#include <iostream>

#define endl '\n'

using namespace std;

int A, B;

void Solution() {
	cin >> A >> B;
	if (A > B) cout << ">" << endl;
	else if (A < B) cout << "<" << endl;
	else cout << "==" << endl;
}

void Solve() {
	Solution();
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	Solve();

	return 0;
}