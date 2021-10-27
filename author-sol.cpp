#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		long long sum = 0;
		bool two_exists = false;
		for (int i = 0; i < n; i++) {
			sum += a[i];
			two_exists |= (a[i] == 2);
		}
		// check if the sum is already even
		// if not, then check if a number two (2) exists in the sequence
		// because we can change two (2) to an odd number using the 'p' operation
		// so it is always possible to match one odd number to this newly created odd number
		// and the sum is now be even
		// if there are no twos in the sequence and the sum is odd, then output -1
		int ans = -1;
		if (sum % 2 == 0) {
			ans = 0;
		} else if (two_exists) {
			ans = 1;
		}
		cout << ans << '\n';
	}
	return 0;
}
