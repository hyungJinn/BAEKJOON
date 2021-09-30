#include <iostream>
#include <vector>
#include <string>

#define endl '\n'

using namespace std;

int solution() {
	int result = 0, idx = 0;
	string str = "";
	vector<string> vowel = { "a", "e", "i", "o", "u" };

	cin >> str;
	for (int i = 0; i < vowel.size();) {
		idx = str.find(vowel[i], idx);
		if (idx == -1) {
			i++;
			idx = 0;
		}
		else {
			result++;
			idx = idx + 1;
		}
	}
	return result;
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