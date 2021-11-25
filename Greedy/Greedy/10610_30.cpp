#include <iostream>
#include <string>
#include <algorithm>

#define endl '\n'
#define MAX 100001

using namespace std;

string N;
char arr[MAX];

bool desc(char a, char b) {
	return a > b;
}

void solution() {
	cin >> N;
	int N_len = 0;
	int N_sum = 0;

	N_len = N.length();
	for (int i = 0; i < N_len; i++) {
		arr[i] = N[i];
		N_sum += N[i];
	}

	sort(arr, arr + N_len, desc);

	int last_element = 0;
	if (N_sum % 3 == 0) {
		last_element = arr[N_len - 1] - '0';
		if (last_element == 0) {
			cout << arr << endl;
		}
		else {
			cout << "-1" << endl;
		}
	}
	else {
		cout << "-1" << endl;
	}
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	solution();

	return 0;
}