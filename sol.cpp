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
		// all odd numbers: frequency must be even
		// mix parity of numbers: match odd number to another odd number (odd + odd = even)
		// applying operation to an even number = result will always be even
		// applying operation to an odd number = result will always be odd
		// edge case: applying operation to number 2 = result will be 1 (odd)
		
		// if at least one occurrence of 2 exists, then it is possible to make it even (one operation)
		// for example: there are 7 odd numbers and 3 number twos, then we can use 1 number two to
		// make one odd number out of the 7 odd numbers even and the sum will now be even
		int odd = 0;
		bool two_exists = false;
		for (int i = 0; i < n; i++) {
			odd += (a[i] & 1);
			two_exists |= (a[i] == 2);
		}
		if (odd == n && odd & 1) {
			cout << -1 << '\n';
			continue;
		} else if (odd % 2 == 0) {
			cout << 0 << '\n';
			continue;
		}
		cout << (two_exists ? 1 : -1) << '\n';
	}
	return 0;
}
