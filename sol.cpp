#include <bits/stdc++.h>

using namespace std;

void decode() {
	int n, k;
	cin >> n >> k;
	cin.ignore();
	bool p[n] = {false};
	int cnt = 0;
	for (int i = 0; i < k; i++) {
		string s;
		cin >> s;
		if (s == "CLOSEALL") {
			cnt = 0;
			for (int j = 0; j < n; j++) {
				p[j] = false;
			}
		} else {
			int t = 0;
			cin >> t;
			if (p[t - 1] == true) {
				p[t - 1] = false;
				cnt--;
			} else {
				p[t - 1] = true;
				cnt++;
			}
		}
		cout << cnt << "\n";
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
