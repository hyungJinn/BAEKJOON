#include <iostream>
#include <string>
#include <vector>

#define endl '\n'

using namespace std;

string str;
vector<int> v;

void input() {
	cin >> str;
}

void solution(string s) {
	v.resize(26);
	for (int i = 0; i < 26; i++) {
		v[i] = -1;
	}

	for (int i = 0; i < s.length(); i++) {
		int x = s[i] - 'a';
		if (v[x] >= 0) {}
		else {
			v[x] = i;
		}
	}
}

void solve() {
	input();
	solution(str);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	solve();

	return 0;
}