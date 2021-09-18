#include <iostream>
#include <string>

#define endl '\n'

using namespace std;

string str;

void solution() {
	while (!cin.eof()) {
		getline(cin, str);
		cout << str << endl;
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