#include <iostream>
#include <string>

#define endl '\n'

using namespace std;

int arr[26];

void solution() {
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		int x = str[i] - 'a';
		arr[x]++;
	}
}

void solve() {
	solution();
	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	solve();

	return 0;
}