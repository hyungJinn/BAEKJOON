//I referred to this site, https://cryptosalamander.tistory.com/15.

#include <iostream>
#include <string>
#include <vector>

#define endl '\n'

using namespace std;

int solution() {
	vector<string> croatian = { "c=", "c-", "dz=", "d-", "lj", "nj","s=", "z=" };
	int idx = 0;
	int result = 0;
	string str = "";
	cin >> str;
	for (int i = 0; i < croatian.size(); i++) {
		while (1) {
			idx = str.find(croatian[i]);
			if (idx == string::npos) break;
			str.replace(idx, croatian[i].length(), "#");
		}
	}
	return str.length();
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