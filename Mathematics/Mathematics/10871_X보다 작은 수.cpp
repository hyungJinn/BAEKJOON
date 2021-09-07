#include <iostream>

#define endl '\n'
#define MAX 10001

using namespace std;

int N, X;
int arr[MAX];

void Input() {
	cin >> N >> X;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
}

void Solution() {
	for (int i = 0; i < N; i++) {
		if (arr[i] < X) cout << arr[i] << " ";
	}
	cout << endl;
}

void Solve() {
	Input();
	Solution();
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	Solve();

	return 0;
}