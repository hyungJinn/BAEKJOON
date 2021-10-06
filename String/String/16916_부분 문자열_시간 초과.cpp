#include <iostream>
#include <cstring>

#define endl '\n'

using namespace std;

char S[1000001], P[1000001], Stack[1000001], last_p;
int s_size, p_size, point, answer;

void solution() {
	cin >> S >> P;
	s_size = strlen(S);
	p_size = strlen(P);
	last_p =P[p_size - 1];

	for (int i = 0; i < s_size; i++) {
		if (i >= p_size - 1 && S[i] == last_p) {
			int j, k;
			for (j = i, k = p_size - 1; k >= 0; j--, k--)
				if (S[j] != P[k]) break;
			if (k == -1)
				answer = 1;
		}
	}
	cout << answer << endl;
}

void solve() {
	solution();
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	solve();

	return 0;
}