#include <iostream>

#define endl '\n'

using namespace std;

int N;

void Solution() {
	cin >> N;
	for (int i = 1; i < 10; i++) cout << N << " * " << i << " = " << N * i << endl;
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