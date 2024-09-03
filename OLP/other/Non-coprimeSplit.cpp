#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <bits/stdc++.h>

#define nln '\n'
#define ll long long
#define FORI(q, w) for(int i = q; i < w; i++)
#define FORJ(q, w) for(int j = q; j < w; j++)

using namespace std;

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

int t;

void solve() {
	int l, r;
		cin >> l >> r;
		if (r <= 3) { cout << "-1" << nln; return; }
		if (l < r) {
			cout << r/2 << " " << r/2 << nln;
			return;
		}
		for (int i = 2; i <= sqrt(r); i++) {
			int x = r - i;
			if (__gcd(x, i) != 1) {
				cout << i << " " << x << nln;
				return;
			}
		}
	cout << -1 << nln;
}

int main() {
	ios_base::sync_with_stdio(false);
  	cin.tie(NULL);  cout.tie(NULL);
  	indef();
  	
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}
