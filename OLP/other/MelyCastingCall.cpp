#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <utility>

#define nln '\n'
#define ll long long
#define X first
#define Y second

using namespace std;

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

int t;

void print(int k, int m, int n) {
	cout << "YES" << nln;
	cout << k << " " << m << " " << n << nln;
	return;
}

void solve() {
	int n; cin >> n;
	vector<pair<int, int>> c;
	vector<pair<int, int>> l;
	for (int i = 1; i <= n; i++) {
		int x; cin >> x;
		if (x % 2 == 1) l.push_back(make_pair(x, i));
		else c.push_back(make_pair(x, i));
	}
	int ls = l.size();
	int cs = c.size();
	if (ls == 0) cout << "NO" << nln;
	else if (ls >= 3) print(l[0].Y, l[1].Y, l[2].Y);
	else if (ls < 3 && cs >= 2) print(l[0].Y, c[0].Y, c[1].Y);
	else cout << "NO" << nln; 
}	

int main() {
	ios_base::sync_with_stdio(false);
  	cin.tie(NULL);  cout.tie(NULL);
  	indef();
  	
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}
