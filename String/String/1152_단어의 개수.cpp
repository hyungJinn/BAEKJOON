#include <iostream>
#include <string>

#define endl '\n'

using namespace std;

int cnt;
bool flag;
string str;

void Solution() {
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ')
		{
			if (flag == true) {
				cnt++;
				flag = false;
			}

		}
		else {
			if (flag == false) {
				flag = true;
			}
		}
	}
	if (flag == true) cnt++;
	cout << cnt << endl;
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