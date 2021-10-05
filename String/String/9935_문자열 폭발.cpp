//I referred to this site, https://www.acmicpc.net/board/view/4762.

#include <iostream>
#include <cstring>

#define endl '\n'

using namespace std;

char text[1000001], bomb[37], stack[10000001], bomb_last;
int point, text_size, bomb_size;

void solution() {
	cin >> text >> bomb;
	text_size = strlen(text);
	bomb_size = strlen(bomb);
	bomb_last = bomb[bomb_size - 1];

	for (int i = 0; i < text_size; i++) {
		stack[point++] = text[i];
		if (point >= bomb_size && text[i] == bomb_last) {
			int j, k;
			for (j = point - 1, k = bomb_size - 1; k >= 0; j--, k--)
				if (stack[j] != bomb[k]) break;
			if (k == -1) point -= bomb_size;
		}
	}

	if (point == 0) cout << "FRULA" << endl;
	else {
		for (int i = 0; i < point; i++)
			cout << stack[i];
		cout << endl;
	}
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