#include <iostream>
#include <string>

#define endl '\n'

using namespace std;

int solution() {
	int idx = 0, res = 0;
	string s;
	cin >> s;
	while (idx < s.size()) {
		idx = s.find(",", idx);
		if (idx > 0) {
			res++;
			idx += 1;
		}
	}
	res += 1;
	return res;
}

void solve() {
	cout << solution() << endl;
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	solve();

	return 0;
}