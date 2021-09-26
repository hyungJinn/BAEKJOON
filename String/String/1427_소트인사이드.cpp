#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define endl '\n'

using namespace std;

vector<int> result;

void solution() {
	string str;
	cin >> str;
	result.resize(str.size());
	for (int i = 0; i < str.size(); i++) {
		int x = str[i] - '0';
		result[i] = x;
	}
	sort(result.begin(), result.end(), greater<int>());
}

void solve() {
	solution();
	for (int i = 0; i < result.size(); i++) {
		cout << result[i];
	}
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	solve();

	return 0;
}