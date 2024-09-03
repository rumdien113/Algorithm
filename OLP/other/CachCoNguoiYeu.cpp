#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <utility>
#define fast ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL)
#define nln '\n'
#define ll long long
#define X first
#define Y second
#define pb push_back

using namespace std;

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

int t;

void solve() {
	int n, m, k, cnt;
	cin >> n >> m >> k;
	cnt = (n-1) + (m-1)*2 + (((m-1)*(m-2)/2));
	if (cnt == k) cout << "YES" << nln;
	else cout << "NO" << nln;
}

int main() {
	fast;
  	indef();
  	cin >> t;
  	while(t--) {
  		solve();
  	}
	return 0;
}
