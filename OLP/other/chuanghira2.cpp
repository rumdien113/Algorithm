#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

#define nln '\n'
#define ll long long

using namespace std;

int t;

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	cin >> t;
	while(t--) {
		int n, a[105], b[105];
		fill(b, b+105, 0);
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			b[a[i]]++;
		}

		for (int i = 1; i <= n; i++)
			if (b[a[i]] == 1)
				cout << i;
			// cout << a[i] << " " << b[a[i]] << nln;
		cout << nln;
	}
	

	return 0;
}
