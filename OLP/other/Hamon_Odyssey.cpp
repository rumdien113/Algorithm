#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

#define nln '\n'
#define ll long long

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int t; cin >> t;
	while(t--) {
		int n, tmp = INT_MAX, ans = 0; 
		cin >> n;
		vector<ll> v(n);
		for (int i = 0; i < n; i++)	{
			cin >> v[i];
			tmp &= v[i];
		}
		if (tmp == 0) {
			ll val = INT_MAX;
			for (int i = 0; i < n; i++) {
				val &= v[i];
				if (val == tmp) {
					ans++;
					val = INT_MAX;
				}
			}
		} else ans = 1;
		cout << ans << nln;
	}

	return 0;
}
