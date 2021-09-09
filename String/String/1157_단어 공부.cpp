#include <iostream>
#include <string>

#define endl '\n'

using namespace std;

int result, maxValue, arr[26];
bool flag; //true : -1 / false : ch
string str;

void Solution() {
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if ('A' <= str[i] && str[i] <= 'Z') arr[str[i] - 'A']++;
		else arr[str[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		if (0 < maxValue && arr[i] == maxValue) {
			flag = true;
		}
		else if (arr[i] > maxValue) {
			maxValue = arr[i];
			result = i;
			flag = false; //¾øÀ¸¸é, input : MMaccnnN, output : ?, answer : N
		}
	}

	if (flag == true) cout << '?' << endl;
	else {
		char ch = result + 'A';
		cout << ch << endl;
	}
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