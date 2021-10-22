//I referred to this site, https://hsp1116.tistory.com/30.

#include <iostream>
#include <stack>

#define endl '\n'

using namespace std;

int N, H; //H : height
stack<pair<int, int>> s;

void solution() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> H;

		while (!s.empty()) {
			if (H < s.top().second) {
				cout << s.top().first << " ";
				break;
			}
			s.pop();
		}

		if (s.empty()) {
			cout << 0 << " ";
		}

		s.push(make_pair(i + 1, H));
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