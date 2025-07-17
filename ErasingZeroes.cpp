#include <bits/stdc++.h>

using namespace std;

void decode() {
	string s;
	cin >> s;
	int l = 0, r = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '1') {
			l = i;
			break;
		}
	}
	for (int i = l; i < s.size(); i++) {
		if (s[i] == '1') {
			r = i;
		}
	}
	int cnt = 0;
	for (int i = l; i < r; i++) {
		if (s[i] == '0') cnt++;
	}
	cout << cnt << "\n";
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		decode();
	}
	return 0;
}