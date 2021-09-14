#include <iostream>
#include <string>
#include <vector>

#define endl '\n'

using namespace std;

int N;
string str;
vector<int> v;

void input() {
	cin >> N;
	cin >> str;
}

int solution(string s) {
	int answer = 0;

	for (int i = 0; i < s.size(); i++) {
		int x = s[i] - '0';
		answer += x;
	}
	return answer;
}

void solve() {
	input();
	cout << solution(str) << endl;
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	solve();

	return 0;
}