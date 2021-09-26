#include <iostream>
#include <string>

#define endl '\n'

using namespace std;

void solution() {
	int x = 10;
	string str;
	cin >> str;
	while (!str.empty()) {
		if (x > str.size()) {
			cout << str << endl;
			str.erase(0, str.size());
		}
		else {
			cout << str.substr(0, x) << endl;
			str.erase(0, x);
		}
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