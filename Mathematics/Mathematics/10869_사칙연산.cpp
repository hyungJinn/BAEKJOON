#include<iostream>

#define endl '\n'

using namespace std;

void solution() {
	int A, B;
	cin >> A >> B;

	cout << A + B << endl;
	cout << A - B << endl;
	cout << A * B << endl;
	cout << A / B << endl;
	cout << A % B << endl;
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