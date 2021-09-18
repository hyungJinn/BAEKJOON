#include <iostream>

#define endl '\n'

using namespace std;

int N, cnt;
int arr[26];

void solution() {
	cin >> N;
	while (N--) {
		bool check = false;
		string str;
		cin >> str;
		for (int i = 0; i < str.size(); i++) {
			int x = str[i] - 'a';
			arr[x]++;
			if (i > 0 && str[i - 1] == str[i]) arr[x]--;
		}
		for (int i = 0; i < 26; i++) {
			if (arr[i] > 1) check = true;

			arr[i] = 0; //√ ±‚»≠
		}
		if (check == false) cnt++;
	}
}

void solve() {
	solution();
	cout << cnt << endl;
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	solve();

	return 0;
}