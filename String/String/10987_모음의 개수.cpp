#include <iostream>
#include <vector>
#include <string>

#define endl '\n'

using namespace std;

int solution() {
	int result = 0;
	string str = "";

	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
			result++;
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